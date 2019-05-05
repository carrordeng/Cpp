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

void full_func()
{
    cout << "Please enter a number less than 13." << endl;
    int num;
    cin >> num;
    cout << fact(num) << endl;
}

int main()
{
    full_func();
    return 0;
}