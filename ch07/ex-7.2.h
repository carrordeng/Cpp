#ifndef EX_7_2_H
#define EX_7_2_H

#include <iostream>
#include <string>

struct Sales_data
{
    std::string bookNo;
    std::string bookName;
    unsigned int units_sold;
    double price = 0.0;
    double revenue = 0.0;

    inline void calRevenue() { revenue = units_sold * price; }
    void Print();
    void AddData(Sales_data data);
    void SetData(Sales_data data);
    Sales_data &combine(const Sales_data &data);
};

//member functions
Sales_data &Sales_data::combine(const Sales_data &data)
{
    units_sold += data.units_sold;
    revenue += data.revenue;
    return *this;
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
    units_sold = data.units_sold;
    price = data.price;
    revenue = data.revenue;
}

#endif