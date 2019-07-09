#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void Replace(string &s, const string &oldVal, const string &newVal)
{
    for (string::size_type beg = 0; s.size() - beg + 1 >= oldVal.size();)
    {
        bool isEqual = true;
        for (string::size_type pos = 0; pos != oldVal.size(); ++pos)
        {
            if (s[beg + pos] != oldVal[pos])
            {
                isEqual = false;
                break;
            }
        }
        if (isEqual)
        {
            s.replace(beg, oldVal.size(), newVal);
            beg += newVal.size() - 1;
        }
        else
            ++beg;
    }
}

int main()
{
    {
        string str{"To drive straight thru is a foolish, tho courageous act."};
        Replace(str, "thru", "through");
        Replace(str, "tho", "though");
        cout << str << endl;
    }
    {
        string str{
            "To drive straight thruthru is a foolish, thotho courageous act."};
        Replace(str, "thru", "through");
        Replace(str, "tho", "though");
        cout << str << endl;
    }
    {
        string str{"To drive straight thru is a foolish, tho courageous act."};
        Replace(str, "thru", "thruthru");
        Replace(str, "tho", "though");
        cout << str << endl;
    }
    {
        string str{"my world is a big world"};
        Replace(str, "world",
                "worldddddddddddddddddddddddddddddddddddddddddddddddd");
        cout << str << endl;
    }
    return 0;
}