#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int array[10];
    for (size_t i = 0; i < 10; ++i)
    {
        array[i] = i;
        if (i == 0)
            cout << "The first array is: ";
        cout << array[i] << " ";
    }
    cout << endl;

    int array2[10];
    for (size_t i = 0; i < 10; ++i)
    {
        array2[i] = array[i];
        if (i == 0)
            cout << "The second array is: ";
        cout << array2[i] << " ";
    }
    return 0;
}