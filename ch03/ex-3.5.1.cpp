#include <iostream>
#include <string>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string total, now;
    if (cin >> total)
    {
        while (cin >> now)
            total += now;
        cout << "The concatenated string is " << total << endl;
    }
    else
    {
        cerr << "No input?" << endl;
        return -1;
    }
    return 0;
}