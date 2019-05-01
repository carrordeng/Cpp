#include <iostream>

using std::cout;
using std::endl;
using c_int_array = const int[4];

int main()
{
    int ia[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    for (c_int_array &row : ia)
    {
        for (const int col : row)
            cout << col << " ";
        cout << endl;
    }
    return 0;
}