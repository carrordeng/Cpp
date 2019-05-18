#ifndef EX_7_23_H
#define EX_7_23_H

#include <string>

class Screen
{
public:
    typedef std::string::size_type pos;

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;

public:
    Screen() = default;
    Screen(const pos &h, const pos &w, const char &c) : height(h), width(w), contents(h * w, c) {}
    inline const char get() const { return contents[cursor]; }
    inline const char get(const pos &row, const pos &col) const { return contents[row * width + col]; }
};
#endif