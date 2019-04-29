#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec;
    cout << "Input at least two integers." << endl;
    int i;
    while (cin >> i)
        ivec.push_back(i);
    if (ivec.empty() || ivec.size() == 1)
        cout << "The input doesn't meet the requirement." << endl;
    else
    {
        for (auto it = ivec.begin(); it != ivec.end() - 1; ++it)
            cout << *it + *(it + 1) << endl;
    }
    return 0;
}