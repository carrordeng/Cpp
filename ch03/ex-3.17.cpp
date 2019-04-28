#include <iostream>
#include <vector>
#include <string>
#include "cctype"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> svec;
    string str;
    while (cin >> str)
        svec.push_back(str);
    for (decltype(svec.size()) sx = 0; sx != svec.size(); ++sx)
    {
        for (auto &c : svec[sx])
        {
            c = toupper(c);
        }
        if (sx != 0 && sx % 8 == 0)
            cout << endl;
        cout << svec[sx] << " ";
    }
    return 0;
}