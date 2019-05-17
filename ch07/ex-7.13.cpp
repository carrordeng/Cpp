#include "./ex-7.12.h"
#include <iostream>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    Sales_data total(cin);
    if (!total.isbn().empty())
    {
        std::istream &is = cin;
        while (is)
        {
            Sales_data trans(is);
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(cout, total) << endl;
                total = trans;
            }
        }
    }
    else
    {
        cerr << "No data?!" << endl;
        return -1;
    }

    return 0;
}