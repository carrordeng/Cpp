#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

inline string pre_suffix(string name, const string &prefix, const string &suffix)
{
    name.insert(0,prefix);
    name.insert(name.length(),' ' + suffix);
    return name;
}

int main()
{
    string name = "Robert Downey", preMale = "Mr.", suffix = "Jr.";
    cout << pre_suffix(name, preMale, suffix) << endl;
    return 0;
}