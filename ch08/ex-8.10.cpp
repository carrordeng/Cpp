#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;

int main(int argc, char *argv[])
{
    ifstream input(argv[1]);
    string line, word;
    vector<string> svec;
    while (getline(input, line))
        svec.push_back(line);
    for (string &tmp : svec)
    {
        istringstream buf(tmp);
        while (buf >> word)
            cout << word << endl;
    }
    return 0;
}