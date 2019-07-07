#include <iostream>
#include <list>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::string;

int main()
{
    list<string> slist;
    string input;
    while (cin >> input)
        slist.push_back(input);
    for (auto it = slist.cbegin(); it != slist.cend(); ++it)
        cout << *it << endl;
    return 0;
}