#include <iostream>
#include "../include/Sales_item.h"

int main()
{
    Sales_item item1, item2;
    if (std::cin >> item1)
    {
        std::cin >> item2;
        if (item1.isbn() == item2.isbn())
        {
            std::cout << item1 + item2 << std::endl;
        }
        else
        {
            std::cerr << "Input data must have same ISBN." << std::endl;
            return -1;
        }
    }
    else
    {
        std::cerr << "No input?" << std::endl;
        return -1;
    }
}