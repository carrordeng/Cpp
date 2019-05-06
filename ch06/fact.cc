#include <iostream>
#include "./Chapter6.h"

using std::cin;
using std::cout;
using std::endl;

unsigned fact(unsigned val)
{
    if (val == 0 || val == 1)
        return 1;
    return val * fact(val - 1);
}
