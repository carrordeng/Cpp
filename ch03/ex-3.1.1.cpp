#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int small = 0, big = 0;
    cout << "Please input two integers:";
    cin >> small >> big;

    if (small > big)
    {
        int tmp = small;
        small = big;
        big = tmp;
    }

    while (small <= big)
    {
        cout << small << " ";
        small++;
    }
    cout << endl;
}