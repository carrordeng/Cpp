#include <iostream>
#include <string>

using std::cout;
using std::endl;

void reset(int &i)
{
    i = 0;
}

int main()
{
    int i = 5;
    reset(i);
    cout << i << endl;
    return 0;
}