#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>

struct Sales_data
{
    std::string bookNo;
    std::string bookName;
    unsigned int units_sold;
    double price = 0.0;
    double revenue = 0.0;

    void CalRevenue();
    void Print();
    void AddData(Sales_data data);
    void SetData(Sales_data data);
};

void Sales_data::CalRevenue()
{
    revenue = price * units_sold;
}

void Sales_data::Print()
{
    std::cout << bookNo << " "
              << bookName << " "
              << units_sold << " "
              << price << " "
              << revenue << std::endl;
}

void Sales_data::AddData(Sales_data data)
{
    if (bookNo != data.bookNo)
        return;
    units_sold += data.units_sold;
    revenue += data.revenue;
}

void Sales_data::SetData(Sales_data data)
{
    bookNo = data.bookNo;
    bookName = data.bookName;
    price = data.price;
    revenue = data.revenue;
}

#endif