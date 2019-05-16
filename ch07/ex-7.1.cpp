#include "../ch02/Sales_data.h"
#include <iostream>

using std::cerr;
using std::cin;
using std::endl;

int main()
{
    Sales_data total;
    if (cin >> total.bookNo >> total.bookName >> total.units_sold >> total.price)
    {
        total.CalRevenue();
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.bookName >> trans.units_sold >> trans.price)
        {
            trans.CalRevenue();
            if (total.bookNo == trans.bookNo)
                total.AddData(trans);
            else
            {
                total.Print();
                total.SetData(trans);
            }
        }
        total.Print();
    }
    else
    {
        cerr << "No data?" << endl;
        return -1;
    }
    return 0;
}