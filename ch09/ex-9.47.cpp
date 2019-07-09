#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void output_character_1(const string &str, const string &paradigm)
{
    string::size_type pos = 0;
    while ((pos = str.find_first_of(paradigm, pos)) != string::npos)
    {
        cout << str[pos];
        ++pos;
    }
    cout << endl;
}

void output_character_2(const string &str, const string &paradigm)
{
    string::size_type pos = 0;
    while ((pos = str.find_first_not_of(paradigm, pos)) != string::npos)
    {
        cout << str[pos];
        ++pos;
    }
    cout << endl;
}

int main()
{
    string source = "ab2c3d7R4E6";
    string nums = "0123456789", alphabets = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    output_character_1(source, nums);
    output_character_1(source, alphabets);
    output_character_2(source, alphabets);
    output_character_2(source, nums);
    return 0;
}