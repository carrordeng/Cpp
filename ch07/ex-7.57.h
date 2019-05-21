#ifndef EX_7_57_H
#define EX_7_57_H

#include <iostream>

class Account
{
private:
    std::string owner;
    double amount;
    static constexpr double initRate = 1.04;
    static double interestRate;

public:
    void calculate() { amount += amount * interestRate; }
    static double getRate() { return interestRate; }
    static void changeRate(double newRate) { interestRate = newRate; }
};

double Account::interestRate = Account::initRate;
#endif