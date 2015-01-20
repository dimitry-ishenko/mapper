////////////////////////////////////////////////////////////////////////////////
#ifndef UINPUT_HPP
#define UINPUT_HPP

////////////////////////////////////////////////////////////////////////////////
#include "storage/file.hpp"

#include <set>
#include <string>
#include <type_traits>

////////////////////////////////////////////////////////////////////////////////
namespace app
{

////////////////////////////////////////////////////////////////////////////////
struct event
{
    int type;
    std::set<int> codes;
};

inline bool operator<(const event& x, const event& y) noexcept
{
    return x.type < y.type;
}

typedef std::set<event> events;

////////////////////////////////////////////////////////////////////////////////
class uinput: public storage::file
{
public:
    uinput() = default;
    uinput(const uinput&) = delete;
    uinput(uinput&& x) noexcept { swap(x); }

    template<typename Name, typename Events>
    uinput(int number, Name&& name, Events&& events)
    {
        static_assert(std::is_convertible<Name, std::string>::value, "Name must be convertible to std::string");
        static_assert(std::is_convertible<Events, app::events>::value, "Events must be convertible to app::events");

        _M_number = number;
        _M_name = std::forward<Name>(name);
        _M_events = std::forward<Events>(events);
    }
    ~uinput() { close(); }

    void open();
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
        std::swap(_M_number, x._M_number);
        std::swap(_M_name, x._M_name);
        std::swap(_M_events, x._M_events);
    }

    int number() const noexcept { return _M_number; }
    const std::string& name() const noexcept { return _M_name; }

    static const std::string path;

protected:
    int _M_number;
    std::string _M_name;
    app::events _M_events;
};

////////////////////////////////////////////////////////////////////////////////
}

////////////////////////////////////////////////////////////////////////////////
#endif // UINPUT_HPP
