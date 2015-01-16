////////////////////////////////////////////////////////////////////////////////
#include "enum.hpp"
#include "errno_error.hpp"
#include "storage/file.hpp"

#include <iostream>
#include <map>
#include <stdexcept>
#include <string>

#include <linux/input.h>
#include <linux/uinput.h>

////////////////////////////////////////////////////////////////////////////////
#define VERSION_MAJOR 0
#define VERSION_MINOR 0
#define VERSION_MICRO 0

////////////////////////////////////////////////////////////////////////////////
namespace app
{

////////////////////////////////////////////////////////////////////////////////
const std::string uinput_path = "/dev/uinput";

////////////////////////////////////////////////////////////////////////////////
struct input_device
{
    int id;
    std::string path;
    storage::file dev;

    input_device(int _id, const std::string& _path):
        id(_id), path(_path)
    { }

    input_device(input_device&& x):
        id(std::move(x.id)),
        path(std::move(x.path)),
        dev(std::move(x.dev))
    { }
};

////////////////////////////////////////////////////////////////////////////////
enum type
{
    KEY   = 0x01,
    REL   = 0x02,
    ABS   = 0x04,
};
DECLARE_OPERATOR(type)

const std::map<type, int> ev_type =
{
    { KEY , EV_KEY },
    { REL , EV_REL },
    { ABS , EV_ABS },
};

////////////////////////////////////////////////////////////////////////////////
struct output_device
{
    int id;
    app::type type;
    storage::file dev;

    output_device(int _id, app::type _type):
        id(_id), type(_type)
    { }

    output_device(output_device&& x):
        id(std::move(x.id)),
        type(x.type),
        dev(std::move(x.dev))
    { }
};

typedef std::map<int, input_device> input_devices;
typedef std::map<int, output_device> output_devices;

////////////////////////////////////////////////////////////////////////////////
input_devices inputs;
output_devices outputs;

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void ADD_INPUT_DEVICE(int id, const std::string& path)
{
    if(inputs.count(id)) throw std::invalid_argument("Duplicate input device ID " + std::to_string(id));

    std::cout << "Adding input device " << path << std::endl;
    inputs.emplace(id, input_device(id, path));
}

////////////////////////////////////////////////////////////////////////////////
void ADD_OUTPUT_DEVICE(int id, app::type type)
{
    if(outputs.count(id)) throw std::invalid_argument("Duplicate output device ID " + std::to_string(id));

    std::cout << "Adding output device " << id << std::endl;
    outputs.emplace(id, output_device(id, type));
}

////////////////////////////////////////////////////////////////////////////////
}

////////////////////////////////////////////////////////////////////////////////
int main(int , char* [])
{
    // define input and output devices
    #define DEFINE_DEVICE
    #include "map.h"
    #undef DEFINE_DEVICE

    return 0;
}
