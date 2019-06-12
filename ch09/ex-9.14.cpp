#include <iostream>
#include <list>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::list;
using std::string;
using std::vector;

int main()
{
    list<const char *> lchp{"a", "ab", "abc", "abcd"};
    vector<string> svec;
    svec.assign(lchp.cbegin(), lchp.cend());
    for (const auto c : svec)
        cout << c << " ";
    cout << endl;
    return 0;
}