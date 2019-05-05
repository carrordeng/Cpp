#include <iostream>

using std::cin;
using std::cout;
using std::endl;

unsigned fact(unsigned val)
{
    if (val == 0 || val == 1)
        return 1;
    return val * fact(val - 1);
}

int main()
{
    unsigned num;
    cin >> num;
    cout << fact(num) << endl;
    return 0;
}