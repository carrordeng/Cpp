#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int ab_val(int val)
{
    return val < 0 ? -val : val;
}

/*
template <typename T>
T abs(T i)
{
    return i >= 0 ? i : -i;
}
*/

int main()
{
    int num;
    cin >> num;
    cout << ab_val(num) << endl;
    return 0;
}