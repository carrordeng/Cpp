#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

inline string pre_suffix(string name, const string &prefix, const string &suffix)
{
    name.insert(name.begin(), prefix.begin(), prefix.end());
    string fullName = name.append(' ' + suffix);
    return fullName;
}

int main()
{
    string name = "Robert Downey", preMale = "Mr.", suffix = "Jr.";
    cout << pre_suffix(name, preMale, suffix) << endl;
    return 0;
}