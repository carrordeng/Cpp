#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

std::istream &rw(std::istream &is)
{
    string tmp;
    while (is >> tmp)
        cout << tmp << endl;
    is.clear();
    return is;
};

int main()
{
    rw(cin);
    return 0;
}