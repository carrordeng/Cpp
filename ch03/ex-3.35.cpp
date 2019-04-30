#include <iostream>

using std::begin;
using std::cout;
using std::end;

int main()
{
    int ia[10]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *beg = begin(ia);
    int *last = end(ia);
    while (beg != last)
    {
        *beg = 0;
        ++beg;
    }
    for (auto i : ia)
        cout << i << " ";
    return 0;
}