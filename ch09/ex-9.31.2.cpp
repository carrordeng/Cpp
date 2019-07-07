#include <forward_list>
#include <iostream>

using std::cout;
using std::endl;
using std::forward_list;

int main()
{
    forward_list<int> iflist{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto prev = iflist.before_begin();
    auto curr = iflist.begin();
    while (curr != iflist.end())
    {
        if (*curr % 2)
        {
            curr = ++iflist.insert_after(curr, *curr);
            advance(prev, 2);
        }
        else
            curr = iflist.erase_after(prev);
    }
    for (auto i : iflist)
        cout << i << " ";
    cout << endl;
    return 0;
}