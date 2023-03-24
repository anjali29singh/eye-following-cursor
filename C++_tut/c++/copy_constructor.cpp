// when objects are copy c++ must create new object from existing
// object
// copy of an object is made when passing object by value as parameter
// returning an object from function by value
// contructing onen object based on another of same class
#include <iostream>
#include <string>
using namespace std;
class Player
{

private:
    string name;
    int health;
    int exp;

public:
    string get_name() { return name; }
    int get_health() { return health; }
    int get_exp() { return exp; }
    Player(string name_val = "None", int health_val = 0, int exp_val = 0);
    // copy constructor
    Player(const Player &source);
    // destructor
    ~Player() { cout << "Destructor called for " << name << endl; }
};
Player::Player(string name_val, int health_val, int exp_value)
    : name{name_val}, health{health_val}, exp{exp_value}
{
    cout << "Three agrs call for " << name << endl;
}
// copy constructor
Player::Player(const Player &source)
    : name{source.name}, health{source.health}, exp{source.exp}
{
    cout << "Copy constructor is called for: " << source.name << endl;
}
void display_player(Player p)
{
    cout << "Name: " << p.get_name() << endl;
    cout << "Health: " << p.get_health() << endl;
    cout << "Exp: " << p.get_exp() << endl;
}
int main()
{
    Player empty{"harry"};
    display_player(empty);
    // Player smith{empty};
    Player frank{"Frank"};
    Player hero{"Hero", 100, 50};

    return 0;
}