#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
    std::string name;
    std::string address;

public:
    const std::string &getName() { return name; }
    const std::string &getAddress() { return address; }
};

#endif