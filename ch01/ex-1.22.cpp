#include <iostream>
#include "../include/Sales_item.h"

int main()
{
    Sales_item item, curritem;
    if (std::cin >> curritem)
    {
        while (std::cin >> item)
        {
            if (curritem.isbn() == item.isbn())
            {
                curritem += item;
            }
            else
            {
                std::cout << curritem << std::endl;
                curritem = item;
            }
        }
        std::cout << curritem << std::endl;
        return 0;
    }
    else
    {
        std::cerr << "No input data?" << std::endl;
        return -1;
    }
}