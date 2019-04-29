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
    else if (ivec.size() == 1)
        cout << ivec[0] * 2 << endl;
    else
    {
        decltype(ivec.size()) size = ivec.size();
        if (size % 2 != 0)
            size = size / 2 + 1;
        else
            size = size / 2;
        for (decltype(ivec.size()) xi = 0; xi != size; ++xi)
            cout << ivec[xi] + ivec[ivec.size() - 1 - xi] << endl;
    }
    return 0;
}