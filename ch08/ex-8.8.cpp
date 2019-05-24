#include "../ch02/Sales_data.h"
#include <fstream>
#include <iostream>

using std::cerr;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;

int main(int argc, char *argv[])
{
    ifstream input(argv[1]);
    Sales_data total;
    if (input >> total.bookNo >> total.bookName >> total.units_sold >> total.price)
    {
        ofstream output(argv[2], ofstream::app);
        total.CalRevenue();
        Sales_data trans;
        while (input >> trans.bookNo >> trans.bookName >> trans.units_sold >> trans.price)
        {
            trans.CalRevenue();
            if (total.bookNo == trans.bookNo)
                total.AddData(trans);
            else
            {
                output << total.bookNo << " "
                       << total.bookName << " "
                       << total.units_sold << " "
                       << total.price << " "
                       << total.revenue << endl;
                total.SetData(trans);
            }
        }
        output << total.bookNo << " "
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