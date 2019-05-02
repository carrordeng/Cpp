#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int grade;
    cin >> grade;
    if (grade > 90)
        cout << "high pass";
    else if (grade < 60)
        cout << "fail";
    else if (grade < 75)
        cout << "low pass";
    else
        cout << "pass";
    return 0;
}