#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<vector<int>> vec_2D(2);
    for (int i = 0; i < 2; ++i)
    {
        string str;
        getline(cin, str);
        vector<string> splited;
        string num = "";
        for (auto c : str)
        {
            if (c == ' ')
            {
                splited.push_back(num);
                num = "";
            }
            else
                num = num + c;
        }
        for (auto c : splited)
            vec_2D[i].push_back(std::stoi(c));
    }
    if (vec_2D[0].size() == vec_2D[1].size())
        cout << "The input integer sequences have the same length." << endl;
    else
    {
        vector<int>::size_type minlen =
            vec_2D[0].size() < vec_2D[1].size() ? vec_2D[0].size() : vec_2D[1].size();
        for (vector<int>::size_type i = 0; i < minlen; ++i)
        {
            if (vec_2D[0][i] != vec_2D[1][i])
            {
                cout << "false" << endl;
                return 0;
            }
        }
        cout << "true" << endl;
        return 0;
    }
}