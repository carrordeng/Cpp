#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

inline bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    cout << std::boolalpha << isShorter("Hello", "World") << endl;
    cout << std::boolalpha << isShorter("string", "large_string") << endl;
    return 0;
}