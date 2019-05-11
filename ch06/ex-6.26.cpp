#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
    string str;
    for (int i = 1; i != argc; ++i)
        str += argv[i];
    cout << str << endl;
    return 0;
}