#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Account.h files contains the class declarations
// implementation files contains functions definition of class which is defined in header file

// sometimes .h file is included in more than on cpp file which is error .To prevent this include guar
//#ifndef =if not defined
//#define _classname_H_
// in last  #endif
// block statements btw #ifndef and #endif will be executed only if the identifier with #ifndef is not defined
class Account
{
private:
    string name;
    double balance;

public:
    // methods declared inine
    void set_balance(double bal)
    {
        balance = bal; // methods within class can access class attributes directly
    }
    double get_balance()
    {
        return balance;
    }
    // methods will be declared outside the class declarations
    void set_name(string n); // expression
    string get_name();
    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_name(string n)
{
    name = n;
}
string Account::get_name()
{
    return name;
}

bool Account::deposit(double amount)
{
    balance = balance + amount;
    return true;
}
bool Account::withdraw(double amount)
{
    if (balance - amount >= 0)
    {
        balance = balance - amount;
        return true;
    }
    else
        return false;
}
int main()
{
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);
    if (frank_account.deposit(200.0))
        cout << "Deposited Ok" << endl;
    else
        cout << "Deposit Not allowed " << endl;

    if (frank_account.withdraw(1500.0))
        cout << "withdraw  Ok" << endl;
    else
        cout << "Nof sufficient funds" << endl;

    return 0;
}