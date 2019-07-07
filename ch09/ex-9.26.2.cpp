#include <iostream>
#include <list>
#include <vector>

using std::cout;
using std::end;
using std::endl;
using std::list;
using std::vector;

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};

    //! init
    vector<int> vec(ia, end(ia));
    list<int> lst(vec.begin(), vec.end());

    //! remove odd value
    for (auto it = lst.begin(); it != lst.end();)
        if (*it & 0x1)
            it = lst.erase(it);
        else
            ++it;

    //! remove even value
    for (auto it = vec.begin(); it != vec.end();)
        if (!(*it & 0x1))
            it = vec.erase(it);
        else
            ++it;

    //! print
    cout << "list : ";
    for (auto i : lst)
        cout << i << " ";
    cout << "\nvector : ";
    for (auto i : vec)
        cout << i << " ";
    cout << std::endl;

    return 0;
}