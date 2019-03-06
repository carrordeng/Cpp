#include <iostream>
#include "../include/Sales_item.h"

int main()
{
    Sales_item item;
    if (std::cin >> item)
    {
        std::cout << item;
        while (std::cin >> item)
        {
            std::cout << item;
        }
        return 0;
    }
    else
    {
        std::cout << "No input?" << std::endl;
        return -1;
    }
}