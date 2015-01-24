////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2015 Dimitry Ishenko
// Distributed under the GNU GPL v2. For full terms please visit:
// http://www.gnu.org/licenses/gpl.html
//
// Contact: dimitry (dot) ishenko (at) (gee) mail (dot) com

////////////////////////////////////////////////////////////////////////////////
#ifndef OUTPUT_HPP
#define OUTPUT_HPP

////////////////////////////////////////////////////////////////////////////////
#include "event.hpp"
#include "storage/file.hpp"

#include <string>
#include <type_traits>

////////////////////////////////////////////////////////////////////////////////
namespace app
{

////////////////////////////////////////////////////////////////////////////////
class output: public storage::file
{
public:
    output() = default;
    output(const output&) = delete;
    output(output&& x) noexcept { swap(x); }

    template<typename Name, typename Events>
    output(int number, Name&& name, Events&& events)
    {
        static_assert(std::is_convertible<Name, std::string>::value, "Name must be convertible to std::string");
        static_assert(std::is_convertible<Events, app::events>::value, "Events must be convertible to app::events");

        _M_number = number;
        _M_name = std::forward<Name>(name);
        _M_events = std::forward<Events>(events);
    }
    ~output() { close(); }

    void open();
    void close();

    output& operator=(const output&) = delete;
    output& operator=(output&& x) noexcept
    {
        swap(x);
        return (*this);
    }

    void swap(output& x) noexcept
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
#endif // OUTPUT_HPP
