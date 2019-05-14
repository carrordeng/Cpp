#include <iostream>
#include "./Sales_data.h"

using std::cerr;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    Sales_data total;
    if (cin >> total.bookNo >> total.bookName >> total.units_sold >> total.price)
    {
        total.calRevenue();
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.bookName >> trans.units_sold >> trans.price)
        {
            trans.calRevenue();
            if (total.bookNo == trans.bookNo)
                total.combine(trans);
            else
            {
                cout << total.bookNo << " "
                          << total.bookName << " "
                          << total.units_sold << " "
                          << total.price << " "
                          << total.revenue << endl;
                total = trans;
            }
        }
        cout << total.bookNo << " "
                  << total.bookName << " "
                  << total.units_sold << " "
                  << total.price << " "
                  << total.revenue << endl;
    }
    else
    {
        cerr << "No data?" << endl;
        return -1;
    }
    return 0;
}