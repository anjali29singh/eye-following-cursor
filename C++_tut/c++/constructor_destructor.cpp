// constructors are  special member of methods
//  no return type
//  useful for initialization
//  same name as classes
/*
class Player{

    public:
        int xp;
        int health;

    private:
     //overloaded constructors
        Player();
        Player(std::string );

        //destructor;
        ~Player();
}
*/
/*
destructor are also special member of methods
same name as class proceeded with tilde (~)
no return type no parameter
only 1 destructor is allowed per class hence cannot be overloaded
useful to release memory
*/

#include <iostream>
using namespace std;
#include <string>

class Player
{
private:
    string name;
    int health;
    int xp;

public:
    void set_name(string n)
    {
        name = n;
    }
    // overloaded constructors
    Player()
    {
        cout << "No args constructor called" << endl;
    }
    Player(string name)
    {
        cout << "String arg constructor called" << endl;
    }
    Player(string name, int health, int xp)
    {
        cout << "Three arg constructor called" << endl;
    }
    ~Player()
    {
        cout << "Destructor is called for " << name << endl;
    }
};
int main()
{
    {
        Player slayer;
        slayer.set_name("Slayer");
    }

    {
        Player frank;
        frank.set_name("Frank");
        Player hero;
        hero.set_name("Hero");
        Player villan;
        villan.set_name("Villan");
    }
    Player anjali;
    anjali.set_name("anjali");
    // if constructor is not declared in class then cpp create default constructor

    return 0;
}