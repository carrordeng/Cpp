#ifndef EX_7_27_H
#define EX_7_27_H

#include <string>

class Screen
{
public:
    typedef std::string::size_type pos;

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;

private:
    void do_display(std::ostream &os) const { os << contents; }

public:
    Screen() = default;
    Screen(const pos &h, const pos &w, const char &c) : height(h), width(w), contents(h * w, c) {}
    const char get() const { return contents[cursor]; }
    const char get(const pos &row, const pos &col) const { return contents[row * width + col]; }
    Screen &set(const char &);
    Screen &set(const pos &, const pos &, const char &);
    Screen &move(const pos &, const pos &);
    Screen &display(std::ostream &);
    const Screen &display(std::ostream &) const;
};

//member functions
inline Screen &Screen::set(const char &c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::set(const pos &row, const pos &col, const char &c)
{
    contents[row * width + col] = c;
    return *this;
}

inline Screen &Screen::move(const pos &row, const pos &col)
{
    cursor = row * width + col;
    return *this;
}

inline Screen &Screen::display(std::ostream &os)
{
    do_display(os);
    return *this;
}

inline const Screen &Screen::display(std::ostream &os) const
{
    do_display(os);
    return *this;
}
#endif