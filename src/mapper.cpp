////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2015 Dimitry Ishenko
// Distributed under the GNU GPL v2. For full terms please visit:
// http://www.gnu.org/licenses/gpl.html
//
// Contact: dimitry (dot) ishenko (at) (gee) mail (dot) com

////////////////////////////////////////////////////////////////////////////////
#include "errno_error.hpp"
#include "input.hpp"
#include "output.hpp"

#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <stdexcept>
#include <string>
#include <vector>

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

    std::cout << "Adding  " << name << ": " << path << _n;
    inputs.emplace_back(number, name, path, exclusive);
}

////////////////////////////////////////////////////////////////////////////////
void output_device_(int number, const std::string& name, const app::events& events)
{
    if(outputs.count(number)) throw std::invalid_argument("Duplicate output device " + name);

    std::cout << "Adding  " << name << _n;
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
    ev.type = app::type(e);                         \
    ev.code = app::code(e);                         \
    ev.value = v;                                   \
    outputs.at(n).write(&ev, sizeof(ev));           \
}                                                   \

#define send_sync(n) send_event(n, static_cast<app::event>(EV_SYN << 16), 0)

#define send_event_mod(n, m, e, v)                  \
    if(v==1) { send_event(n, m, v); send_sync(n); } \
    send_event(n, e, v);                            \
    if(v==0) { send_sync(n); send_event(n, m, v); } \

#define when(c, a) if(c) { a }

#define map(ni, ei, no, eo, vo) when(number_in == ni && ei == event_in, send_event(no, eo, vo))

#define map_mod(ni, ei, no, mo, eo, vo) when(number_in == ni && ei == event_in, send_event_mod(no, mo, eo, vo))

////////////////////////////////////////////////////////////////////////////////
int main(int , char* [])
{
    try
    {
        // define input and output devices
        #define DEFINE_DEVICE
        #include "map.h"
        #undef DEFINE_DEVICE
        std::cout << _n;

        std::vector<pollfd> desc;
        desc.reserve(inputs.size());

        // open input devices
        for(app::input& input: inputs)
        {
            std::cout << "Opening " << input.name() << _n;
            input.open();

            desc.emplace_back(pollfd { .fd = input.get_id(), .events = POLL_IN });
        }
        std::cout << _n;

        // open and initialize output devices
        for(auto& ri: outputs)
        {
            app::output& output = ri.second;

            std::cout << "Opening " << output.name() << _n;
            output.open();
        }
        std::cout << _n;

        // install signal handler
        struct sigaction sa;
        memset(&sa, 0, sizeof(sa));

        sa.sa_handler = [](int) { running = false; };
        sa.sa_flags = SA_RESTART;

        sigaction(SIGINT, &sa, NULL);
        sigaction(SIGTERM, &sa, NULL);

        // main loop
        input_event ev;
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

                    auto read = input.read(&ev, sizeof(ev));
                        if(read != sizeof(ev))
                    throw std::runtime_error("Short read from device " + input.name());

                    // for use in macros
                    int number_in = input.number();
                    app::event event_in = static_cast<app::event>((ev.type << 16) + ev.code);
                    int value_in = ev.value;

                    //using std::setw; using std::left;

                    //auto ri = event_name.find(event_in);
                    //    if(ri != event_name.end())
                    //std::cout << "event = " << left << setw(16) << ri->second << " value = " << setw(0) << value_in << _n;

                    std::memset(&ev, 0, sizeof(ev));

                    #define DEFINE_MAPPING
                    #include "map.h"
                    #undef DEFINE_MAPPING

                    // send sync events to all output devices
                    if(ev.type == EV_SYN)
                    {
                        std::memset(&ev.time, 0, sizeof(ev.time));
                        for(auto& ri: outputs)
                        {
                            app::output& output = ri.second;
                            output.write(&ev, sizeof(ev));
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
