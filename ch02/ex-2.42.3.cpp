#include <iostream>
#include "Sales_data.h"

int main()
{
    Sales_data total;
    if (std::cin >> total.bookNo >> total.bookName >> total.units_sold >> total.price)
    {
        total.CalRevenue();
        Sales_data trans;
        while (std::cin >> trans.bookNo >> trans.bookName >> trans.units_sold >> trans.price)
        {
            trans.CalRevenue();
            if (total.bookNo == trans.bookNo)
            {
                total.AddData(trans);
            }
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
        std::cerr << "No input data." << std::endl;
        return -1;
    }
    return 0;
}