// not understood much
#include <iostream>
#include <string>
using namespace std;
class Player
{
private:
    string name;
    int health;
    int xp;

public:
    string get_name()
    {
        return name;
    }
    void set_name(string name_val)
    {
        name = name_val;
    }
};
int main()
{
    const Player villan{"villan"};

    return 0;
}
