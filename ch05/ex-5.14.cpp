#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string currstr, maxstr, prestr = "";
    unsigned currCnt = 0, maxCnt = 0;
    while (cin >> currstr)
    {
        if (currstr == prestr || maxCnt == 0)
        {
            ++currCnt;
            if (currCnt > maxCnt)
            {
                maxstr = currstr;
                maxCnt = currCnt;
            }
        }
        else
            currCnt = 1;
        prestr = currstr;
    }
    if (maxCnt == 1)
        cout << "No word was repeated." << endl;
    else
        cout << "The word " << maxstr << " occurred " << maxCnt << " times." << endl;
    return 0;
}