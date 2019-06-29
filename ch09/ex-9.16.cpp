#include <iostream>
#include <list>
#include <vector>

using std::cout;
using std::endl;
using std::list;
using std::vector;

bool compare(const list<int> &ilist, const vector<int> &ivec)
{
    if (ilist.size() != ivec.size())
        return false;
    else
    {
        int i = 0;
        for (list<int>::const_iterator it = ilist.begin(); it != ilist.end(); ++it)
        {
            if (*it != ivec[i])
                return false;
            ++i;
        }
        return true;
    }
}

int main()
{
    list<int> ilist{1, 2, 3, 4};
    vector<int> ivec2{1, 2, 3, 4, 5, 6, 7};
    vector<int> ivec3{1, 2, 3, 4};
    vector<int> ivec4{1, 2, 3};
    vector<int> ivec5{1, 2, 3, 3, 5, 6, 7};
    cout << compare(ilist, ivec2) << endl;
    cout << compare(ilist, ivec3) << endl;
    cout << compare(ilist, ivec4) << endl;
    cout << compare(ilist, ivec5) << endl;
    return 0;
}