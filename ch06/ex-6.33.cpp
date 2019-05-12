#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void print(vector<int>::iterator beg, vector<int>::iterator end)
{
    if (beg != end)
    {
        cout << *beg << " ";
        print(++beg, end); //print(std::next(beg), end);
    }
}

int main()
{
    vector<int> ivec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    print(ivec.begin(), ivec.end());
    return 0;
}