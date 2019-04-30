#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec(10);
    for (auto iter = ivec.begin(); iter != ivec.end(); ++iter)
        *iter = iter - ivec.begin();
    cout << "The first array is: ";
    for (auto i : ivec)
        cout << i << " ";
    cout << endl;

    vector<int> ivec2(ivec);
    cout << "The second array is: ";
    for (auto i : ivec2)
        cout << i << " ";
    cout << endl;
}