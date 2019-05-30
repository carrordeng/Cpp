#include <iostream>
#include <sstream>
#include <string>

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
    string line = "This is a test line.";
    std::istringstream buf(line);
    rw(buf);
    return 0;
}