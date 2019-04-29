#include <iostream>
#include <string>
#include <vector>
#include "cctype"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> text;
    string line;
    while (getline(cin, line))
        text.push_back(line);
    for (auto vit = text.begin(); vit != text.end() && !(*vit).empty(); ++vit)
    {
        for (auto line_it = (*vit).begin(); line_it != (*vit).end(); ++line_it)
            *line_it = toupper(*line_it);
        cout << *vit << endl;
    }
    return 0;
}