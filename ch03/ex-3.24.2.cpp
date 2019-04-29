#include <iostream>
#include <vector>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec;
    cout << "Input at least one integer." << endl;
    int i;
    while (cin >> i)
        ivec.push_back(i);
    if (ivec.empty())
    {
        cerr << "No input?" << endl;
        return -1;
    }
    else
    {
        for (auto begin = ivec.begin(), end = ivec.end() - 1; begin <= end; ++begin, --end)
            cout << *begin + *end << endl;
    }
    return 0;
}