#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string rsp = " ";
    do
    {
        cout << "Please input two strings:" << endl;
        string str1, str2;
        getline(cin, str1);
        getline(cin, str2);
        string s_str = str1 < str2 ? str1 : str2;
        cout << "String:" << s_str << " is the lesser string." << endl
             << "Continue? Enter yes or no:" << endl;
        cin >> rsp;
    } while (!rsp.empty() && rsp[0] != 'n');
    return 0;
}