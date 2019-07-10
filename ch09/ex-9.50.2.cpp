#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::to_string;
using std::vector;

int main()
{
    vector<string> svec{"1", "2", "3", "4", "5", "6", "7", "8", "9"};
    float sum = 0;
    for (auto c : svec)
        sum += stof(c);
    svec.push_back(to_string(sum));
    for (auto c : svec)
        cout << c << " ";
    cout << endl;
    return 0;
}