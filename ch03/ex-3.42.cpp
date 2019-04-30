#include <iostream>
#include <vector>

using std::begin;
using std::cout;
using std::end;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int ia[10];
    for (int *i = begin(ia); i != end(ia); ++i)
    {
        *i = ivec[i - begin(ia)];
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}