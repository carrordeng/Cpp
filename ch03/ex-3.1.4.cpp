#include <iostream>
#include <string>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data
{
    string bookNo;
    string bookName;
    unsigned int units_sold = 0;
    double price = 0.0;
    double revenue = 0.0;
};

int main()
{
    Sales_data total;
    if (cin >> total.bookNo >> total.bookName >> total.units_sold >> total.price)
    {
        total.revenue = total.price * total.units_sold;
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.bookName >> trans.units_sold >> trans.price)
        {
            if (total.bookNo == trans.bookNo)
            {
                total.units_sold += trans.units_sold;
                trans.revenue = trans.price * trans.units_sold;
                total.revenue += trans.revenue;
            }
            else
            {
                cout << total.bookNo << " "
                          << total.bookName << " "
                          << total.units_sold << " "
                          << total.price << " "
                          << total.revenue << endl;
                trans.revenue = trans.price * trans.units_sold;
                total.bookNo = trans.bookNo;
                total.bookName = trans.bookName;
                total.units_sold = trans.units_sold;
                total.price = trans.price;
                total.revenue = trans.revenue;
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
        cerr << "No input data." << endl;
        return -1;
    }
    return 0;
}