#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> svec;
    string word;
    while (cin >> word)
    {
        svec.push_back(word);
        cout << svec.capacity() << endl;
    }
    return 0;
}