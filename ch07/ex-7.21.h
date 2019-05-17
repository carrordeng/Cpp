#ifndef EX_7_21_H
#define EX_7_21_H

#include <iostream>
#include <string>

class Sales_data
{
private:
    std::string bookNo;
    std::string bookName;
    unsigned units_sold = 0;
    double price = 0.0;
    double revenue = 0.0;

    //add constructors
public:
    Sales_data() = default;
    Sales_data(const std::string &No, const std::string &Name) : bookNo(No), bookName(Name) {}
    Sales_data(const std::string &No, const std::string &Name, const unsigned &us, const double &p) : bookNo(No), bookName(Name), units_sold(us), price(p) { calRevenue(); }
    Sales_data(std::istream &is);

    //member functions
    inline void calRevenue() { revenue = units_sold * price; }
    std::string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &data);

    friend std::istream &read(std::istream &is, Sales_data &data);
    friend std::ostream &print(std::ostream &os, const Sales_data &data);
};

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

//constructor
Sales_data::Sales_data(std::istream &is)
{
    read(is, *this);
    calRevenue();
}

//member functions
Sales_data &Sales_data::combine(const Sales_data &data)
{
    units_sold += data.units_sold;
    revenue += data.revenue;
    return *this;
}
#endif