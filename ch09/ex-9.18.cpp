#include <deque>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::deque;
using std::endl;
using std::string;

int main()
{
    deque<string> sque;
    string input;
    while (cin >> input)
        sque.push_back(input);
    for (auto it = sque.cbegin(); it != sque.cend(); ++it)
        cout << *it << endl;
}