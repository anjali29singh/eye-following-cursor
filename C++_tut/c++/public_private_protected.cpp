#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Player
{
private:
    string name{"Frank"};
    int health;
    int xp;

public:
    // methods
    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl; };
    bool is_dead();
};
class Account
{
private:
    double balance;

public:
    void set_balance(double bal)
    {
        balance = bal; // methods within class can access class attributes directly
    }
    double get_balance();
};
// methods outside class

void Account::set_balance(double bal)
{
    balance = bal;
}
double Account::get_balance()
{
    return balance;
}
int main()
{
    // three types of class member access modifier
    // public ,private,protected . by default is private  modifier
    Player frank;
    // frank.name = "Funny"; // compiler error since name is private
    frank.talk("hello there!");

    // implementing member methods
    // very similar to functions
    // member methods have access to member attributes so you don't need to pass them as arguments;

    return 0;
}