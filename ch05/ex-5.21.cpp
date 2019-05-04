#include <iostream>
#include <string>
#include "cctype"

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
            if(!isupper(word[0]))
                continue;
            repeated = word;
            break;
        }
        pre_word = word;
    }
    if (!repeated.empty())
        cout << "The word " << repeated << " occured twice in succession." << endl;
    else
        cout << "No word that start with an uppercase letter was repeated." << endl;
    return 0;
}