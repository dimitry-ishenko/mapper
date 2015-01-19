////////////////////////////////////////////////////////////////////////////////
#ifndef UINPUT_HPP
#define UINPUT_HPP

////////////////////////////////////////////////////////////////////////////////
#include "enum.hpp"
#include "storage/file.hpp"

#include <string>

////////////////////////////////////////////////////////////////////////////////
namespace app
{

////////////////////////////////////////////////////////////////////////////////
enum type
{
    KEY   = 0x01,
    REL   = 0x02,
    ABS   = 0x04,
};
DECLARE_OPERATOR(type)

////////////////////////////////////////////////////////////////////////////////
class uinput: public storage::file
{
public:
    uinput() = default;
    uinput(const uinput&) = delete;
    uinput(uinput&& x) noexcept { swap(x); }

    uinput(const std::string& name, app::type);
    ~uinput() { close(); }

    void close();

    uinput& operator=(const uinput&) = delete;
    uinput& operator=(uinput&& x) noexcept
    {
        swap(x);
        return (*this);
    }

    void swap(uinput& x) noexcept
    {
        storage::file::swap(x);
        std::swap(_M_name, x._M_name);
    }

    const std::string& name() const noexcept { return _M_name; }

    static const std::string path;

protected:
    std::string _M_name;
};

////////////////////////////////////////////////////////////////////////////////
}

////////////////////////////////////////////////////////////////////////////////
#endif // UINPUT_HPP
