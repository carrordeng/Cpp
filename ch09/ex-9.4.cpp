#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

bool find_int(vector<int>::iterator beg, vector<int>::iterator end, const int &target)
{
    for (auto it = beg; it != end; ++it)
    {
        if (*it == target)
            return true;
    }
    return false;
}

int main()
{
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int ia = 5;
    int ib = 10;
    cout << ia << (find_int(ivec.begin(), ivec.end(), ia) ? " is " : " isn't ") << "in the sequence." << endl;
    cout << ib << (find_int(ivec.begin(), ivec.end(), ib) ? " is " : " isn't ") << "in the sequence." << endl;
    return 0;
}