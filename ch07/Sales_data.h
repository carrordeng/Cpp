#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

struct Sales_data
{
    std::string bookNo;
    std::string bookName;
    unsigned int units_sold;
    double price = 0.0;
    double revenue = 0.0;

    void calRevenue() { revenue = units_sold * price; }
    std::string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &data);
};

Sales_data &Sales_data::combine(const Sales_data &data)
{
    units_sold += data.units_sold;
    revenue += data.revenue;
    return *this;
}

#endif