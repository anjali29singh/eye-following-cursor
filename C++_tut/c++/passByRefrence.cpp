// pass arguments by refrence
// do not make copy of arguments and work on actual parameter
#include <iostream>
using namespace std;

void swap_num(int &a, int &b);

void swap_num(int &a, int &b)
{
    swap(a, b);
}
int main()
{
    int a, b;
    cout << "Enter two integers ";
    cin >> a >> b;

    swap_num(a, b);
    cout << a << " " << b << endl;
    return 0;
}