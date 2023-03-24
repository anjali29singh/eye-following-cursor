#include "account.h"
#include <iostream>
#include <string>
void account::set_name(std::string n)
{
    name = n;
}
std::string account::get_name()
{
    return name;
}

bool account::deposit(double amount)
{
    balance = balance + amount;
    return true;
}
bool account::withdraw(double amount)
{
    if (balance - amount >= 0)
    {
        balance = balance - amount;
        return true;
    }
    else
        return false;
}