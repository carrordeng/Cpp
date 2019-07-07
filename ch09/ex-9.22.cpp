#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void insertDoubleValue(vector<int> &iv, int some_val)
{
    auto index = iv.size() / 2;
    auto iter = iv.begin();
    auto mid = iv.begin() + index;
    while (iter != mid)
    {
        if (*iter == some_val)
        {
            iter = iv.insert(iter, 2 * some_val); //++iter
            ++iter;
            index = iv.size() / 2;
            mid = iv.begin() + index;
        }
        ++iter;
    }
}

int main()
{
    vector<int> iv{1, 1, 1, 2, 3, 4, 5, 6, 7, 1, 1, 8};
    insertDoubleValue(iv, 1);
    for (auto i : iv)
        cout << i << " ";
    return 0;
}