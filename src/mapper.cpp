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
#include <initializer_list>
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
#define VERSION_MINOR 5
#define VERSION_MICRO 1

constexpr char _n = '\n';

typedef std::vector<input> input_devices;
typedef std::map<int, output> output_devices;

////////////////////////////////////////////////////////////////////////////////
input_devices inputs;
output_devices outputs;

bool running = true;
bool verbose = false;

////////////////////////////////////////////////////////////////////////////////
void show_event(const std::string& name, const app::event& event, int value)
{
    using std::setw; using std::left;

    auto ri = event_name.find(event);
        if(ri != event_name.end())
    std::cout << left << setw(10) << name << " = " << setw(16) << ri->second << " value = " << setw(0) << value << _n;
}

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

inline void output_device_(int number, const std::string& name, app::event event)
{
    output_device_(number, name, app::events({ event }));
}

////////////////////////////////////////////////////////////////////////////////
void send_event_(int number, app::event event, int value)
{
    if(verbose) show_event("event_out", event, value);

    input_event x
    {
        { 0, 0 },
        app::type(event),
        app::code(event),
        value
    };
    outputs.at(number).write(&x, sizeof(x));
}

////////////////////////////////////////////////////////////////////////////////
inline void send_sync_(int number)
{
    send_event_(number, EVT_SYNC, 0);
}

////////////////////////////////////////////////////////////////////////////////
void send_event_(int number, app::event event, int value, const app::events& modifiers)
{
    if(value==1) for(app::event modifier: modifiers)
    {
        send_event_(number, modifier, value);
        send_sync_(number);
    }

    send_event_(number, event, value);

    if(value==0) for(app::event modifier: modifiers)
    {
        send_sync_(number);
        send_event_(number, modifier, value);
    }
}

inline void send_event_(int number, app::event event, int value, app::event modifier)
{
    send_event_(number, event, value, app::events({ modifier }));
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
const app::events KEYBOARD_KEYS    = range(KEY_ESC, KEY_UNKNOWN);
const app::events MOUSE_BUTTONS    = range(BTN_MOUSE, BTN_TASK);
const app::events JOYSTICK_BUTTONS = range(BTN_JOYSTICK, BTN_DEAD);
const app::events GAMEPAD_BUTTONS  = range(BTN_GAMEPAD, BTN_THUMBR);

////////////////////////////////////////////////////////////////////////////////
#define input_device(n, p)          \
    constexpr int n = __LINE__;     \
    input_device_(n, #n, #p)        \

#define exclusive_device(n, p)      \
    constexpr int n = __LINE__;     \
    input_device_(n, #n, #p, true)  \

#define output_device(n, e)         \
    constexpr int n = __LINE__;     \
    output_device_(n, #n, e)        \

#define send_event(n, e, v, m...) send_event_(n, e, v, ##m)
#define send_sync(n) send_sync_(n)

#define when(c, a) if(c) { a }

#define map(ni, ei, no, eo, vo, mo...) when(name_in == ni && ei == event_in, send_event(no, eo, vo, ##mo);)

////////////////////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])
try
{
    for(int ri = 1; ri < argc; ++ri)
    {
        std::string arg = argv[ri];

        if(arg == "--verbose")
            verbose = true;
        else if(arg == "--version" || arg == "-v")
        {
            std::cout << argv[0] << ' ' << VERSION_MAJOR << '.' << VERSION_MINOR << '.' << VERSION_MICRO << _n;
            return 0;
        }
        else throw std::invalid_argument("Invalid argument: " + arg);
    }

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
    for(int ri = 0; running; )
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

                input_event e;
                auto read = input.read(&e, sizeof(e));
                    if(read != sizeof(e))
                throw std::runtime_error("Short read from device " + input.name());

                // for use in macros
                int name_in = input.number();
                app::event event_in = static_cast<app::event>((e.type << 16) + e.code);
                int value_in = e.value;

                if(verbose) show_event("event_in", event_in, value_in);

                #define DEFINE_MAPPING
                #include "map.h"
                #undef DEFINE_MAPPING

                // send sync events to all output devices
                if(e.type == EV_SYN)
                {
                    e.time.tv_sec = 0;
                    e.time.tv_usec = 0;
                    for(auto& ri: outputs)
                    {
                        app::output& output = ri.second;
                        output.write(&e, sizeof(e));
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
