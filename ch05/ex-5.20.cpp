#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string word, pre_word = "", repeated = "";
    while (cin >> word)
    {
        if (word == pre_word)
        {
            repeated = word;
            break;
        }
        pre_word = word;
    }
    if (!repeated.empty())
        cout << "The word " << repeated << " occured twice in succession." << endl;
    else
        cout << "No word was repeated." << endl;
    /* another approach
    if (cin.eof())
        cout << "no word was repeated." << endl;
    else
        cout << word << " occurs twice in succession." << endl;
    */
    return 0;
}