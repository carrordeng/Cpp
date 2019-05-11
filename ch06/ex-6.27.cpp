#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::initializer_list;

int calSum(initializer_list<int> integer)
{
    int sum = 0;
    for (int i : integer)
        sum += i;
    return sum;
}

int main()
{
    cout << calSum({1, 2, 3, 4, 5, 6, 7, 8, 9}) << endl;
    return 0;
}