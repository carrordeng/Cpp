#ifndef EX_7_53_H
#define EX_7_53_H

class Debug
{
private:
    bool hw;    //hardware errors
    bool io;    //io errors
    bool other; //other errors

public:
    constexpr Debug(bool b = true) : hw(b), io(b), other(b) {}
    constexpr Debug(bool h, bool i, bool o) : hw(h), io(i), other(o) {}
    constexpr bool any() const { return hw || io || other; }
    void set_hw(bool b) { hw = b; }
    void set_io(bool b) { io = b; }
    void set_other(bool b) { other = b; }
};
#endif