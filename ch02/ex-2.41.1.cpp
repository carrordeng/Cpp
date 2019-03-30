#include <iostream>
#include <string>

struct Sales_data
{
    std::string bookNo;
    std::string bookName;
    unsigned int units_sold = 0;
    double price = 0.0;
    double revenue = 0.0;
};


int main()
{
    Sales_data book;
    std::cin >> book.bookNo >> book.bookName >> book.units_sold >> book.price;
    book.revenue = book.units_sold * book.price;
    std::cout << book.bookNo << " "
              << book.bookName << " "
              << book.units_sold << " "
              << book.price << " "
              << book.revenue << std::endl;
    return 0;
}