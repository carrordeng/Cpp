#include <deque>
#include <iostream>
#include <list>

using std::cout;
using std::deque;
using std::endl;
using std::list;

int main()
{
    list<int> ilist{1, 2, 4, 5, 7, 8, 11};
    deque<int> even_que, odd_que;
    for (auto it = ilist.cbegin(); it != ilist.cend(); ++it)
    {
        if (*it % 2 == 0)
            even_que.push_back(*it);
        else
            odd_que.push_back(*it);
    }
    for (auto it = even_que.cbegin(); it != even_que.cend(); ++it)
        cout << *it << " ";
    cout << endl;
    for (auto it = odd_que.cbegin(); it != odd_que.cend(); ++it)
        cout << *it << " ";
    cout << endl;
    return 0;
}