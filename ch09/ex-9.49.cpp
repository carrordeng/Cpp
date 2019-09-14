#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string currWord, longestWord;
    while (cin >> currWord)
    {
        if (currWord.find_first_not_of("aceimnorsuvwxz") == string::npos
        && currWord.length() > longestWord.length())
            longestWord = currWord;
    }
    cout << longestWord << endl;
    return 0;
}