#include <iostream>
#include <string>

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
    Sales_data book;
    cin >> book.bookNo >> book.bookName >> book.units_sold >> book.price;
    book.revenue = book.units_sold * book.price;
    cout << book.bookNo << " "
              << book.bookName << " "
              << book.units_sold << " "
              << book.price << " "
              << book.revenue << endl;
    return 0;
}