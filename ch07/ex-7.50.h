#ifndef EX_7_22_H
#define EX_7_22_H

#include <iostream>
#include <string>

class Person
{
    friend std::istream &read(std::istream &is, Person p);
    friend std::ostream &print(std::istream &is, const Person p);

private:
    std::string name;
    std::string address;

public:
    //construct functions
    Person() = default;
    Person(const std::string n, const std::string &a) : name(n), address(a) {}
    explicit Person(std::istream &is) { is >> name >> address; }

    //member functions
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