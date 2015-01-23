////////////////////////////////////////////////////////////////////////////////
#include "output.hpp"

#include <cstdio>
#include <cstring>
#include <map>
#include <set>
#include <stdexcept>

#include <linux/uinput.h>

////////////////////////////////////////////////////////////////////////////////
namespace app
{

////////////////////////////////////////////////////////////////////////////////
const std::string output::path = "/dev/uinput";

////////////////////////////////////////////////////////////////////////////////
const std::map<int, int> _map =
{
    { EV_KEY, UI_SET_KEYBIT },
    { EV_REL, UI_SET_RELBIT },
    { EV_ABS, UI_SET_ABSBIT },
};

////////////////////////////////////////////////////////////////////////////////
void output::open()
{
    if(is_open()) throw std::runtime_error("uinput::open(): Already open");

    new(this) storage::file(path, storage::open::write, storage::open_opt::non_block);

    struct uinput_user_dev dev;
    std::memset(&dev, 0, sizeof(dev));

    std::set<int> _set;
    for(app::event e: _M_events)
    {
        int type = app::type(e);

        auto ri = _map.find(type);
        if(ri != _map.end())
        {
            if(!_set.count(type))
            {
                control(UI_SET_EVBIT, type);
                _set.insert(type);
            }
            control(ri->second, code(e));
        }
    }

    std::snprintf(dev.name, sizeof(dev.name), "%s-%d", _M_name.data(), _M_number);
    dev.id.bustype = BUS_USB;
    dev.id.vendor  = 0x42;
    dev.id.product = _M_number;
    dev.id.version = 0x01;

    write(&dev, sizeof(dev));
    control(UI_DEV_CREATE);
}

////////////////////////////////////////////////////////////////////////////////
void output::close()
{
    if(is_open()) control(UI_DEV_DESTROY);
    storage::file::close();
}

////////////////////////////////////////////////////////////////////////////////
}
