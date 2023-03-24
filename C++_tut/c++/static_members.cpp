// static members are class members and not object members
// it is initialized before any object and is created for entire class
// syntax state datat_type data_member_name;

#include <iostream>
#include <string>
using namespace std;
class A
{
public:
    A() { cout << "A constructor is called " << endl; }
};
class B
{
    static A a;

public:
    B()
    {
        cout << "B's constructor is called" << endl;
    }
    static A getA() { return a; }
};
A B::a;
int main()
{
    B b1, b2, b3;
    A a = b1.getA();
    return 0;
}