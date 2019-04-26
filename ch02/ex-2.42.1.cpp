#include "Sales_data.h"
#include <iostream>

int main()
{
    Sales_data book;
    std::cin >> book.bookNo >> book.bookName >> book.units_sold >> book.price;
    book.CalRevenue();
    book.Print();
    return 0;
}