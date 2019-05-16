#ifndef EX_7_5_H
#define EX_7_5_H

#include <string>

class Person
{
    std::string name;
    std::string address;

public:
    inline const std::string &getName() const { return name; }
    inline const std::string &getAddress() const { return address; }
};

#endif