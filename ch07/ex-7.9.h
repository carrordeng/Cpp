#ifndef EX_7_9_H
#define EX_7_9_H

#include <iostream>
#include <string>

struct Person
{
    std::string name;
    std::string address;

    inline const std::string &getName() const { return name; }
    inline const std::string &getAddress() const { return address; }
};

std::istream &read(std::istream &is, Person &p)
{
    return is >> p.name >> p.address;
}

std::ostream &print(std::ostream os, const Person &p)
{
    return os << p.name << " " << p.address;
}

#endif