#include "vector"
#include <fstream>
#include <iostream>
#include <string>

using std::cerr;
using std::cout;
using std::endl;
using std::ifstream;
using std::string;
using std::vector;

bool read(const string &fname, vector<string> &svec)
{
    ifstream input(fname);
    if (input)
    {
        string buf;
        while (input >> buf)
            svec.push_back(buf);
        return true;
    }
    else
        return false;
};

int main(int argc, char *argv[])
{
    vector<string> svec;
    if (read(argv[1], svec))
    {
        for (const auto &s : svec)
            cout << s << endl;
    }
    else
    {
        cerr << "Incorrect input." << endl;
        return -1;
    }
    return 0;
}