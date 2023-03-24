#include <iostream>
using namespace std;
#include <iomanip>
#include <vector>
// default arguments
/*double calc_cost(double base_cost, double tax_rate = 0.06, double shipping = 3.50);
double calc_cost(double base_cost, double tax_rate, double shipping)
{
    return base_cost += (base_cost * tax_rate) + shipping;
}*/
void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int n)
{
    cout << "printing int " << n << endl;
}
void print(double num)
{
    cout << "printing double " << num << endl;
}
void print(string s)
{
    cout << "printing string " << s << endl;
}
void print(string a, string b)
{
    cout << "printing 2 strings " << a << " and " << b << endl;
}
void print(vector<string> s)
{
    cout << "printing vector of strngs: ";
    for (auto str : s)
        cout << str << " ";
    cout << endl;
}
int main()
{
    /*double cost{0};
    cost = calc_cost(100.0, 0.08, 4.25); // will use no defaults
    cout << fixed << setprecision(2);
    cout << "cost is " << cost << endl;
    cost = calc_cost(100.0, 0.08); // will use default shipping
    cout << "Cost is " << cost << endl;
    cost = calc_cost(100.0); // will use default tax_rate and shipping;
    cout << "cost is " << cost << endl;
    */
    // function overloading using same name for various forms of function
    print(100); // int
    print(120.567);
    print('A');    // character is always promoted to int
    print(123.5F); // float is promoted to double

    print("C-style string "); // c-style string is converted to c++ string
    return 0;
}