#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int grade;
    cin >> grade;
    cout << (grade > 90 ? "high pass" : (grade < 60 ? "fail" : (grade < 75 ? "low pass" : "pass")));
    return 0;
}