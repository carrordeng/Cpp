#include <iostream>

using std::cout;

int main()
{
    int array[10];
    for (size_t i = 0; i < 10; ++i)
    {
        array[i] = i;
        cout << array[i] << " ";
    }
    return 0;
}