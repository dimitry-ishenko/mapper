////////////////////////////////////////////////////////////////////////////////
#ifndef INPUT_HPP
#define INPUT_HPP

////////////////////////////////////////////////////////////////////////////////
#include "storage/file.hpp"

#include <string>

////////////////////////////////////////////////////////////////////////////////
namespace app
{

////////////////////////////////////////////////////////////////////////////////
class input: public storage::file
{
public:
    input() = default;
    input(const input&) = delete;
    input(input&& x) noexcept { swap(x); }

    template<typename Path>
    input(int number, Path&& path, bool exclusive = false)
    {
        static_assert(std::is_convertible<Path, std::string>::value, "Path must be convertible to std::string");

        _M_number = number;
        _M_path = std::forward<Path>(path);
        _M_exclusive = exclusive;
    }
    ~input() { close(); }

    void open();

    input& operator=(const input&) = delete;
    input& operator=(input&& x) noexcept
    {
        swap(x);
        return (*this);
    }

    void swap(input& x) noexcept
    {
        storage::file::swap(x);
        std::swap(_M_number, x._M_number);
        std::swap(_M_path, x._M_path);
        std::swap(_M_exclusive, x._M_exclusive);
    }

    int number() const noexcept { return _M_number; }
    const std::string& path() const noexcept { return _M_path; }

protected:
    int _M_number;
    std::string _M_path;
    bool _M_exclusive;
};

////////////////////////////////////////////////////////////////////////////////
}

////////////////////////////////////////////////////////////////////////////////
#endif // INPUT_HPP
