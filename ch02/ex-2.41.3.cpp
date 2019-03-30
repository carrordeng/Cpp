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
    Sales_data total;
    if (std::cin >> total.bookNo >> total.bookName >> total.units_sold >> total.price)
    {
        total.revenue = total.price * total.units_sold;
        Sales_data trans;
        while (std::cin >> trans.bookNo >> trans.bookName >> trans.units_sold >> trans.price)
        {
            if (total.bookNo == trans.bookNo)
            {
                total.units_sold += trans.units_sold;
                trans.revenue = trans.price * trans.units_sold;
                total.revenue += trans.revenue;
            }
            else
            {
                std::cout << total.bookNo << " "
                          << total.bookName << " "
                          << total.units_sold << " "
                          << total.price << " "
                          << total.revenue << std::endl;
                trans.revenue = trans.price * trans.units_sold;
                total.bookNo = trans.bookNo;
                total.bookName = trans.bookName;
                total.units_sold = trans.units_sold;
                total.price = trans.price;
                total.revenue = trans.revenue;
            }
        }
        std::cout << total.bookNo << " "
                  << total.bookName << " "
                  << total.units_sold << " "
                  << total.price << " "
                  << total.revenue << std::endl;
    }

    else
    {
        std::cerr << "No input data." << std::endl;
        return -1;
    }
    return 0;
}