#include <iostream>

using std::cout;
using std::endl;

int main()
{
    const char cstr1[]("Hello ");
    const char cstr2[]("World!");
    size_t large_size = strlen(cstr1) + strlen(cstr2) + 1;
    char large_cstr[large_size]; //char *large_cstr = new char[large_size];
    strcpy(large_cstr, cstr1);
    strcat(large_cstr, cstr2);
    cout << large_cstr << endl;
    return 0;
}