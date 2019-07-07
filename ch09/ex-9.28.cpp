#include <forward_list>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::forward_list;
using std::string;

void insertString(forward_list<string> &sflist, const string &str1, const string &str2)
{
    auto prev = sflist.before_begin();
    auto curr = sflist.begin();
    bool found = false;
    while (curr != sflist.end())
    {
        if (*curr == str1)
        {
            curr = ++sflist.insert_after(curr, str2);
            prev++;
            prev++;
            found = true;
        }
        else
            prev = curr++;
    }
    if (!found)
        sflist.insert_after(prev, str2);
}

int main()
{
    forward_list<string> sflist{"a", "bb", "ccc", "bb", "dddd"};
    insertString(sflist, "a", "a");
    insertString(sflist, "bb", "bb");
    insertString(sflist, "???", "???");
    for (auto str : sflist)
        cout << str << " ";
    cout << endl;
    return 0;
}