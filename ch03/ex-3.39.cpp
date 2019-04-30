#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    //using string
    const string str1("Hello");
    const string str2("World");
    if (str1 == str2)
        cout << "Two strings are equal." << endl;
    else if (str1 < str2)
        cout << str1 << " < " << str2 << endl;
    else
        cout << str1 << " > " << str2 << endl;

    //using C-style character string
    const char cstr3[]("Hello");
    const char cstr4[]("World");
    auto result = strcmp(cstr3, cstr4);
    if (result == 0)
        cout << "Two strings are equal." << endl;
    else if (result < 0)
        cout << cstr3 << " < " << cstr4 << endl;
    else
        cout << cstr3 << " > " << cstr4 << endl;
    return 0;
}