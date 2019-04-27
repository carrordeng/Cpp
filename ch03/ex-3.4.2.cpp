#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.size() == s2.size())
        cout << "The strings have the same length." << endl;
    else
        cout << "The longer string is " << ((s1.size() > s2.size()) ? s1 : s2) << endl;
    return 0;
}