#include <iostream>
#include <list>

using std::cout;
using std::endl;
using std::list;

int main()
{
    list<int> ilist{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = ilist.begin();
    while (iter != ilist.end())
    {
        if (*iter % 2)
        {
            iter = ilist.insert(iter, *iter);
            advance(iter, 2);
        }
        else
            iter = ilist.erase(iter);
    }
    for (auto i : ilist)
        cout << i << " ";
    cout << endl;
    return 0;
}