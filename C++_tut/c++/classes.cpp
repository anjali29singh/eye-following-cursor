#include <iostream>
using namespace std;
#include <string>
// declaring class
class player
{
public: // attributes
    string name;
    int health{100};
    int xp{3};
    // methods
    void talk(string text_to_say)
    {
        cout << name << " says " << text_to_say << endl;
    };
    bool is_dead();
};
class Account
{
public: // attributes;
    string name;
    double balance;
    // methods
    bool deposit(double ball);
    bool withdraw(double ball);
};
int main()
{
    // creating objects
    player frank;
    frank.name = "Funny";
    frank.health = 150;
    frank.xp = 10;
    frank.talk("hi there");
    player hero;
    // player *enemy = new player();
    player players[]{frank, hero};

    cout << "===================================================" << endl;
    // two ways we can access class attributes and method
    // dot operator and arrow operator
    player *enemy = new player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 12;
    enemy->talk("I will destroy you!");
    return 0;
}