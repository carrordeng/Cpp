#include <iostream>
#include <list>
#include <vector>

using std::cout;
using std::endl;
using std::list;
using std::vector;

int main()
{
    list<int> li{0, 1, 2, 3, 4};
    vector<int> vi{1, 2, 3, 4, 5, 6};
    vector<double> vda(li.begin(), li.end());
    vector<double> vdb(vi.begin(), vi.end());
    for (const auto c : vda)
        cout << c << " ";
    cout << endl;
    for (const auto c : vdb)
        cout << c << " ";
    cout << endl;
    return 0;
}