#ifndef EX_7_31_H
#define EX_7_31_H

class X;
class Y;

class X
{
    Y *ptrY;
};

class Y
{
    X obj;
};

#endif