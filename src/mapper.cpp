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

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void input_device_(int number, const std::string& path, bool exclusive = false)
{
    for(const app::input& input: inputs)
        if(input.number() == number)
    throw std::invalid_argument("Duplicate input device " + std::to_string(number));

    std::cout << "Adding input device " << number << " - " << path << _n;
    inputs.emplace_back(number, path, exclusive);
}

////////////////////////////////////////////////////////////////////////////////
void output_device_(int number, const app::events& events)
{
    if(outputs.count(number))
        throw std::invalid_argument("Duplicate output device " + std::to_string(number));

    std::cout << "Adding output device " << number << _n;
    outputs.emplace(number, app::output(number, "device", events));
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
const app::events KEYBOARD_KEYS    = range(KEY_ESC, KEY_UNKNOWN);
const app::events MOUSE_BUTTONS    = range(BTN_MOUSE, BTN_TASK);
const app::events JOYSTICK_BUTTONS = range(BTN_JOYSTICK, BTN_DEAD);
const app::events GAMEPAD_BUTTONS  = range(BTN_GAMEPAD, BTN_THUMBR);

////////////////////////////////////////////////////////////////////////////////
#define input_device(n, p) input_device_(n, #p)
#define exclusive_device(n, p) input_device_(n, #p, true)

#define output_device(n, e) output_device_(n, e)

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
        std::cout << "Opening input devices:";
        for(app::input& input: inputs)
        {
            std::cout << ' ' << input.number();
            input.open();

            desc.emplace_back(pollfd { .fd = input.get_id(), .events = POLL_IN });
        }
        std::cout << _n;

        // open and initialize output devices
        std::cout << "Opening output devices:";
        for(auto& ri: outputs)
        {
            app::output& output = ri.second;

            std::cout << ' ' << output.number();
            output.open();
        }
        std::cout << _n;

        input_event event;

        // main loop
        for(int ri = 0; ; )
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

                    using std::setw; using std::left;

                    auto ri = event_name.find(event_in);
                        if(ri != event_name.end())
                    std::cout << "event = " << left << setw(20) << ri->second << " value = " << setw(0) << value_in << _n;

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

        return 0;
    }
    catch(std::exception& e)
    {
        std::cerr << _n << e.what() << _n;
        return 1;
    }
}
