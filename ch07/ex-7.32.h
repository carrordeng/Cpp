#ifndef EX_7_32_H
#define EX_7_32_H

#include <iostream>
#include <string>
#include <vector>

class Screen;

class Window_mgr
{
private:
    std::vector<Screen> screens;

public:
    typedef std::vector<Screen>::size_type ScreenIndex;
    void clear(const ScreenIndex &);
};

class Screen
{
    friend void Window_mgr::clear(const ScreenIndex &);

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

inline void Window_mgr::clear(const ScreenIndex &i)
{
    Screen &s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}

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