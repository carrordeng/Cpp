#ifndef EX_7_6_H
#define EX_7_6_H

#include <iostream>
#include <string>

struct Sales_data
{
    std::string bookNo;
    std::string bookName;
    unsigned int units_sold;
    double price;
    double revenue;

    inline void calRevenue() { revenue = units_sold * price; }
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
Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    return sum.combine(rhs);
}

std::istream &read(std::istream &is, Sales_data &data)
{
    is >> data.bookNo >> data.bookName >> data.units_sold >> data.price;
    data.calRevenue();
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &data)
{
    os << data.bookNo << " " << data.bookName << " "
       << data.units_sold << " " << data.price << " " << data.revenue;
    return os;
}
#endif