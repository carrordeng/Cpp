#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::string;
using std::vector;

int main()
{
    vector<char> cvec{'T', 'h', 'i', 's', ' ', 'i', 's', ' ', 'a', ' ', 'd', 'e', 'm', 'o', '.'};
    string str(cvec.begin(), cvec.end());
    cout << str;
}