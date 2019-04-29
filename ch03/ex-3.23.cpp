#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto it = ivec.begin(); it != ivec.end(); ++it)
    {
        *it = *it * 2;
        cout << *it << endl;
    }
    return 0;
}