#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec1{1, 2, 3, 4, 5};
    vector<int> ivec2{1, 2, 3, 4, 5};
    vector<int> ivec3{1, 2, 3, 4, 6};
    vector<int> ivec4{1, 2, 3};
    cout << "ivec1 and ivec2 are "
         << (ivec1 == ivec2 ? "equal." : "not equal.") << endl;
    cout << "ivec1 and ivec3 are "
         << (ivec1 == ivec3 ? "equal." : "not equal.") << endl;
    cout << "ivec1 and ivec4 are "
         << (ivec1 == ivec4 ? "equal." : "not equal.") << endl;
    return 0;
}