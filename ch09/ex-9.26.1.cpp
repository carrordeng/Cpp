#include <iostream>
#include <list>
#include <vector>

using std::cout;
using std::endl;
using std::list;
using std::vector;

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> ivec;
    list<int> ilist;
    for (auto i : ia)
    {
        ivec.push_back(i);
        ilist.push_back(i);
    }
    for (auto iter = ilist.begin(); iter != ilist.end(); ++iter)
    {
        if (*iter % 2 == 1)
            ilist.erase(iter);
    }
    for (auto i : ilist)
        cout << i << " ";
    cout << endl;
    for (auto iter = ivec.begin(); iter != ivec.end(); ++iter)
    {
        if (*iter % 2 == 0)
            ivec.erase(iter);
    }
    for (auto i : ivec)
        cout << i << " ";
    cout << endl;
    return 0;
}