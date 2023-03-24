#include <iostream>
using namespace std;
#include <string>
class Player
{
private:
    string name;
    int health;
    int exp;

public:
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int exp_val);
};
Player::Player()
{
    name = "none"; // assignment
    health = 0;
    exp = 0;
}
Player::Player(string name_val)
    : name{name_val}
{
}
// previous way
//  Player::Player(string name_val, int health_val, int exp_val)
//  {
//      name = name_val;
//      health = health_val;
//      exp = exp_val;
//      cout << "#" << endl;
//  }
// better way
Player::Player(string name_val, int health_val, int exp_val)

    : name{name_val}, health{health_val}, exp{exp_val} {

                                          };
int main()
{
    Player empty;

    Player Frank{"Frank"};
    Player villan{"Villan", 100, 55};

    return 0;
}