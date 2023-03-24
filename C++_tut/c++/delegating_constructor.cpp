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
    // overloaded constructors
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int exp_val);
};
Player::Player()
    : Player{"None", 0, 0} // delegating constructor this constructor calls other constructor .in this case it is calling 3 agr constructor
{
    cout << "NO args constructor" << endl; // same as name{name_val},health{0}, exp{0}
}
Player::Player(string name_val)
    : Player{name_val, 0, 0}
{
    cout << "One arg constructor" << endl;
}
Player::Player(string name_val, int health_val, int exp_val)
    : name{name_val}, health{health_val}, exp{exp_val}
{
    cout << "Three args constructor" << endl;
}

int main()
{
    Player empty;
    Player frank{"frank"};
    Player villan{"villan", 100, 50};

    return 0;
}