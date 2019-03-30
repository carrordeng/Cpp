#include <iostream>
#include "../include/Sales_item.h"

int main()
{
    Sales_item curritem, item;
    if (std::cin >> curritem)
    {
        int cnt = 1;
        while (std::cin >> item)
        {
            if (item.isbn() == curritem.isbn())
                cnt++;
            else
            {
                std::cout << "For ISBN " << curritem.isbn() << " transaction occured " << cnt << " times" << std::endl;
                cnt = 1;
                curritem = item;
            }
        }
        std::cout << "For ISBN " << curritem.isbn() << " transaction occured " << cnt << " times" << std::endl;
    }
    else
    {
        std::cerr << "No input data?" << std::endl;
        return -1;
    }
    return 0;
}