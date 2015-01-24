////////////////////////////////////////////////////////////////////////////////
#include "enum.hpp"
#include "errno_error.hpp"
#include "input.hpp"
#include "storage/file.hpp"
#include "output.hpp"

#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

#include <linux/input.h>
#include <poll.h>
#include <signal.h>

using namespace app;

////////////////////////////////////////////////////////////////////////////////
#define VERSION_MAJOR 0
#define VERSION_MINOR 0
#define VERSION_MICRO 0

constexpr char _n = '\n';

typedef std::vector<input> input_devices;
typedef std::map<int, output> output_devices;

////////////////////////////////////////////////////////////////////////////////
input_devices inputs;
output_devices outputs;

bool running = true;

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void input_device_(int number, const std::string& name, const std::string& path, bool exclusive = false)
{
    for(const app::input& input: inputs)
        if(input.number() == number)
    throw std::invalid_argument("Duplicate input device " + name);

    std::cout << "Adding device " << name << ": " << path << _n;
    inputs.emplace_back(number, name, path, exclusive);
}

////////////////////////////////////////////////////////////////////////////////
void output_device_(int number, const std::string& name, const app::events& events)
{
    if(outputs.count(number)) throw std::invalid_argument("Duplicate output device " + name);

    std::cout << "Adding device " << name << _n;
    outputs.emplace(number, app::output(number, name, events));
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
const app::events KEYBOARD_KEYS    = range(KEY_ESC, KEY_UNKNOWN);
const app::events MOUSE_BUTTONS    = range(BTN_MOUSE, BTN_TASK);
const app::events JOYSTICK_BUTTONS = range(BTN_JOYSTICK, BTN_DEAD);
const app::events GAMEPAD_BUTTONS  = range(BTN_GAMEPAD, BTN_THUMBR);

////////////////////////////////////////////////////////////////////////////////
#define input_device(n, p)                          \
    constexpr int n = __LINE__;                     \
    input_device_(n, #n, #p)                        \

#define exclusive_device(n, p)                      \
    constexpr int n = __LINE__;                     \
    input_device_(n, #n, #p, true)                  \

#define output_device(n, e)                         \
    constexpr int n = __LINE__;                     \
    output_device_(n, #n, e)                        \

#define send_event(n, e, v)                         \
{                                                   \
    event.type = app::type(e);                      \
    event.code = app::code(e);                      \
    event.value = v;                                \
    outputs.at(n).write(&event, sizeof(event));     \
}                                                   \

#define send_sync(n) send_event(n, static_cast<app::event>(EV_SYN << 16), 0)

#define send_event_mod(n, m, e, v)                  \
    if(v==1) { send_event(n, m, v); send_sync(n); } \
    send_event(n, e, v);                            \
    if(v==0) { send_sync(n); send_event(n, m, v); } \

#define when(c, a) if(c) { a }

#define map(ni, ei, no, eo, vo) when(number_in == ni && ei == event_in, send_event(no, eo, vo))

////////////////////////////////////////////////////////////////////////////////
int main(int , char* [])
{
    try
    {
        // define input and output devices
        #define DEFINE_DEVICE
        #include "map.h"
        #undef DEFINE_DEVICE

        std::vector<pollfd> desc;
        desc.reserve(inputs.size());

        // open input devices
        for(app::input& input: inputs)
        {
            std::cout << "Opening device " << input.name() << _n;
            input.open();

            desc.emplace_back(pollfd { .fd = input.get_id(), .events = POLL_IN });
        }

        // open and initialize output devices
        for(auto& ri: outputs)
        {
            app::output& output = ri.second;

            std::cout << "Opening device " << output.name() << _n;
            output.open();
        }

        // install signal handler
        struct sigaction sa;
        memset(&sa, 0, sizeof(sa));

        sa.sa_handler = [](int) { running = false; };
        sa.sa_flags = SA_RESTART;

        sigaction(SIGINT, &sa, NULL);
        sigaction(SIGTERM, &sa, NULL);

        // main loop
        input_event event;
        int ri = 0;

        while(running)
        {
            int n = poll(&desc[0], desc.size(), -1);
            if(n < 0)
            {
                if(errno == EINTR)
                    break;
                else throw errno_error();
            }

            for(; n > 0; ri = ++ri % desc.size())
            {
                if(desc[ri].revents & POLL_IN)
                {
                    app::input& input = inputs[ri]; // used in macros

                    auto read = input.read(&event, sizeof(event));
                        if(read != sizeof(event))
                    throw std::runtime_error("Short read from device " + std::to_string(input.number()));

                    // for use in macros
                    int number_in = input.number();
                    app::event event_in = static_cast<app::event>((event.type << 16) + event.code);
                    int value_in = event.value;

                    //using std::setw; using std::left;

                    //auto ri = event_name.find(event_in);
                    //    if(ri != event_name.end())
                    //std::cout << "event = " << left << setw(16) << ri->second << " value = " << setw(0) << value_in << _n;

                    std::memset(&event, 0, sizeof(event));

                    #define DEFINE_MAPPING
                    #include "map.h"
                    #undef DEFINE_MAPPING

                    // send sync events to all output devices
                    if(event.type == EV_SYN)
                    {
                        std::memset(&event.time, 0, sizeof(event.time));
                        for(auto& ri: outputs)
                        {
                            app::output& output = ri.second;
                            output.write(&event, sizeof(event));
                        }
                    }

                    --n;
                }
            }
            if(n > 0) throw std::runtime_error("Didn't process all incoming data");
        }

        std::cout << "Exiting" << _n;
        return 0;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << _n;
        return 1;
    }
}
