#include "./ex-7.11.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    Sales_data data;
    print(cout, data) << endl;
    data = Sales_data("0-201-78345-X", "Harry-Potter");
    print(cout, data) << endl;
    data = Sales_data("0-201-78345-X", "Harry-Potter", 3, 10);
    print(cout, data) << endl;
    data = Sales_data(cin);
    print(cout, data) << endl;
    return 0;
}