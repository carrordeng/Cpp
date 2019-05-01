#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int ia[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    for (int(*row)[4] = ia; row != ia + 3; ++row)
    {
        for (int *col = *row; col != *row + 4; ++col)
            cout << *col << " ";
        cout << endl;
    }
    return 0;
}