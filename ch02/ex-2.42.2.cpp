#include <iostream>
#include "Sales_data.h"

int main()
{
    Sales_data book1, book2;
    std::cin >> book1.bookNo >> book1.bookName >> book1.units_sold >> book1.price;
    std::cin >> book2.bookNo >> book2.bookName >> book2.units_sold >> book2.price;
    book1.CalRevenue();
    book2.CalRevenue();
    if (book1.bookNo == book2.bookNo)
    {
        book1.AddData(book2);
        book1.Print();
    }
    else
    {
        std::cerr << "Input data must have same ISBN." << std::endl;
        return -1;
    }

    return 0;
}