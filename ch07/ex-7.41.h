#ifndef EX_7_41_H
#define EX_7_41_H

#include <iostream>
#include <string>

class Sales_data
{
    friend std::istream &read(std::istream &is, Sales_data &data);
    friend std::ostream &print(std::ostream &os, const Sales_data &data);

private:
    std::string bookNo;
    std::string bookName;
    unsigned units_sold = 0;
    double price = 0.0;
    double revenue = 0.0;

public:
    //add constructors
    Sales_data(const std::string &No, const std::string &Name, const unsigned &us, const double &p) : bookNo(No), bookName(Name), units_sold(us), price(p)
    {
        calRevenue();
        std::cout << 1 << std::endl;
    }
    Sales_data() : Sales_data(" ", " ", 0, 0.0f) { std::cout << 0 << std::endl; }
    Sales_data(const std::string &No, const std::string &Name) : Sales_data(No, Name, 0, 0.0f) { std::cout << 2 << std::endl; }
    Sales_data(std::istream &is) : Sales_data()
    {
        read(is, *this);
        std::cout << 3 << std::endl;
    }

    //member functions
    inline void calRevenue() { revenue = units_sold * price; }
    std::string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &data);

private:
    inline double avg_price() const { return units_sold ? revenue / units_sold : 0.0; }
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

//member functions
Sales_data &Sales_data::combine(const Sales_data &data)
{
    units_sold += data.units_sold;
    revenue += data.revenue;
    return *this;
}
#endif