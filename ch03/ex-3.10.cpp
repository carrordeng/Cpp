#include <iostream>
#include <string>
#include "cctype"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str, result;
    cin >> str;
    for (auto c : str)
    {
        if (!ispunct(c))
            result.append(1, c);
    }
    cout << result << endl;
    return 0;
}