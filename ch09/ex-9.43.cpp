#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void Replace(string &s, const string &oldVal, const string &newVal)
{
    for (auto s_head = s.begin(); s_head != s.end();)
    {
        if (*s_head == ' ')
        {
            ++s_head;
            continue;
        }
        auto s_tail = s_head;
        auto iterOld = oldVal.begin();
        while (*s_tail != ' ' && s_tail != s.end() && iterOld != oldVal.end())
        {
            if (*s_tail != *iterOld)
                break;
            ++s_tail;
            ++iterOld;
        }
        if (iterOld == oldVal.end())
        {
            s.erase(s_head, s_tail + 1);
            s.insert(s_tail, newVal.begin(), newVal.end());
            s_head = s_tail;
        }
        else
            ++s_head;
    }
}

int main()
{
    string str = "To drive straight thruthru is a foolish, thotho courageous act.";
    Replace(str, "thru", "through");
    Replace(str, "thro", "though");
    cout << str << endl;
    return 0;
}