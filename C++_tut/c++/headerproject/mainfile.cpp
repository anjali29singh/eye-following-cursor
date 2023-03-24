#include "account.h"
#include "account.cpp"
#include <iostream>
using namespace std;
#include <string>
int main()
{
    account frank_account;
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