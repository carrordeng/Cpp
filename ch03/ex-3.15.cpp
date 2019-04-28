#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::string;
using std::vector;

int main()
{
    string str;
    vector<string> svec;
    while (cin >> str)
        svec.push_back(str);
    return 0;
}