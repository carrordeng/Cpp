#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>

struct Sales_data
{
    std::string bookNo;
    std::string bookName;
    unsigned int units_sold = 0;
    double price = 0.0;
    double revenue = 0.0;

    void calRevenue() { revenue = units_sold * price; }
    std::string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &data);
};

//member functions
Sales_data &Sales_data::combine(const Sales_data &data)
{
    units_sold += data.units_sold;
    revenue += data.revenue;
    return *this;
}

//nonmember functions
Sales_data &add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data data = lhs;
    return data.combine(rhs);
}

std::istream &read(std::istream &is, Sales_data data)
{
    is >> data.bookNo >> data.bookName >> data.units_sold >> data.price;
    data.calRevenue();
    return is;
}

std::ostream &print(std::ostream &os, Sales_data data)
{
    os << data.bookNo << " " << data.bookName << " "
       << data.units_sold << " " << data.price << " " << data.revenue;
    return os;
}

#endif