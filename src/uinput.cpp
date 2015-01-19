////////////////////////////////////////////////////////////////////////////////
#include "uinput.hpp"

#include <cstdio>
#include <cstring>
#include <map>

#include <linux/uinput.h>

////////////////////////////////////////////////////////////////////////////////
namespace app
{

////////////////////////////////////////////////////////////////////////////////
const std::string uinput::path = "/dev/uinput";

struct detail
{
    int type; // EV_...
    int bit;  // UI_SET_...BIT
    int max;  // ..._MAX
};

const std::map<type, detail> type_detail =
{
    { KEY , { EV_KEY, UI_SET_KEYBIT, KEY_MAX } },
    { REL , { EV_REL, UI_SET_RELBIT, REL_MAX } },
    { ABS , { EV_ABS, UI_SET_ABSBIT, ABS_MAX } },
};

////////////////////////////////////////////////////////////////////////////////
uinput::uinput(const std::string& name, app::type type):
    storage::file(path, storage::open::write, storage::open_opt::non_block)
{
    struct uinput_user_dev dev;
    std::memset(&dev, 0, sizeof(dev));

    for(auto& ri: type_detail)
        if(type && ri.first)
        {
            const app::detail& detail = ri.second;

            control(UI_SET_EVBIT, detail.type);
                for(int val = 0; val < detail.max; ++val)
            control(detail.bit, val);
        }

    std::snprintf(dev.name, sizeof(dev.name), "%s", name.data());
    dev.id.bustype = BUS_USB;
    dev.id.vendor  = 0x42;
    dev.id.product = 0x06;
    dev.id.version = 0x07;

    write(&dev, sizeof(dev));
    control(UI_DEV_CREATE);
}

////////////////////////////////////////////////////////////////////////////////
void uinput::close()
{
    if(is_open()) control(UI_DEV_DESTROY);
    storage::file::close();
}

////////////////////////////////////////////////////////////////////////////////
}
