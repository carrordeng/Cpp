#include "./ex-7.41.h"
#include <iostream>

int main()
{
    Sales_data data0, data1, data2, data3;
    data0 = Sales_data();
    print(std::cout, data0) << std::endl;
    data1 = Sales_data("0-201-78345-X", "Harry-Potter", 2, 10);
    print(std::cout, data1) << std::endl;
    data2 = Sales_data("0-201-78346-X", "Algorithm");
    print(std::cout, data2) << std::endl;
    data3 = Sales_data(std::cin);
    print(std::cout, data3) << std::endl;
    return 0;
}