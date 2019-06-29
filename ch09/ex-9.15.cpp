#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

bool ivec_compare(const vector<int> &ivec1, const vector<int> &ivec2)
{
    if (ivec1.size() != ivec2.size())
        return false;
    else
    {
        for (vector<int>::size_type i = 0; i != ivec1.size(); ++i)
        {
            if (ivec1[i] != ivec2[i])
                return false;
        }
        return true;
    }
}

int main()
{
    vector<int> ivec1{1, 2, 3, 4};
    vector<int> ivec2{1, 2, 3, 4, 5, 6, 7};
    vector<int> ivec3{1, 2, 3, 4};
    vector<int> ivec4{1, 2, 3};
    vector<int> ivec5{1, 2, 3, 3, 5, 6, 7};
    cout << ivec_compare(ivec1, ivec2) << endl;
    cout << ivec_compare(ivec1, ivec3) << endl;
    cout << ivec_compare(ivec1, ivec4) << endl;
    cout << ivec_compare(ivec1, ivec5) << endl;
    return 0;
}