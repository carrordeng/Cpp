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
    Sales_data book1, book2;
    cin >> book1.bookNo >> book1.bookName >> book1.units_sold >> book1.price;
    book1.revenue = book1.units_sold * book1.price;
    cin >> book2.bookNo >> book2.bookName >> book2.units_sold >> book2.price;
    book2.revenue = book2.units_sold * book2.price;
    if (book1.bookNo == book2.bookNo)
    {
        unsigned int totalcnt = book1.units_sold + book2.units_sold;
        double total_revenue = book1.revenue + book2.revenue;
        cout << book1.bookNo << " "
             << book1.bookName << " "
             << totalcnt << " "
             << book1.price << " "
             << total_revenue << endl;
    }
    else
    {
        cerr << "Input data must have same ISBN." << endl;
        return -1;
    }
    return 0;
}