////////////////////////////////////////////////////////////////////////////////
#include "enum.hpp"
#include "errno_error.hpp"
#include "storage/file.hpp"
#include "uinput.hpp"

#include <iostream>
#include <map>
#include <stdexcept>
#include <string>

////////////////////////////////////////////////////////////////////////////////
#define VERSION_MAJOR 0
#define VERSION_MINOR 0
#define VERSION_MICRO 0

////////////////////////////////////////////////////////////////////////////////
namespace app
{

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
struct output_device
{
    int id;
    app::type type;
    app::uinput dev;

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
void add_input_device(int id, const std::string& path)
{
    if(inputs.count(id)) throw std::invalid_argument("Duplicate input device ID " + std::to_string(id));

    std::cout << "Adding input device " << path << std::endl;
    inputs.emplace(id, input_device(id, path));
}

////////////////////////////////////////////////////////////////////////////////
void add_output_device(int id, app::type type)
{
    if(outputs.count(id)) throw std::invalid_argument("Duplicate output device ID " + std::to_string(id));

    std::cout << "Adding output device " << id << std::endl;
    outputs.emplace(id, output_device(id, type));
}

////////////////////////////////////////////////////////////////////////////////
}

////////////////////////////////////////////////////////////////////////////////
#define ADD_INPUT_DEVICE(id, path) add_input_device(id, #path)
#define ADD_OUTPUT_DEVICE(id, type) add_output_device(id, type)

////////////////////////////////////////////////////////////////////////////////
int main(int , char* [])
{
    using namespace app;

    try
    {
        // define input and output devices
        #define DEFINE_DEVICE
        #include "map.h"
        #undef DEFINE_DEVICE

        // open input devices
        for(auto& ri: inputs)
        {
            input_device& input = ri.second;
            input.dev = storage::file(input.path, storage::open::read);
        }

        // open and initialize output devices
        for(auto& ri: outputs)
        {
            output_device& output = ri.second;
            output.dev = app::uinput("mapper-" + std::to_string(output.id), output.type);
        }

        return 0;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }
}
