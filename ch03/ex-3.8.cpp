#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string str("for example");
    decltype(str.size()) i = 0;
    //Using while
    while (i < str.size())
    {
        str[i] = 'X';
        i++;
    }
    cout << str << endl;
    
    //Using traditional for loop
    for (i = 0; i < str.size(); i++)
        str[i] = 'Y';
    cout << str << endl;
    return 0;
}