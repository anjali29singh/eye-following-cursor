#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void ruler()
{
    cout << "\n 1234567890123456789012345678901234567890" << endl;
}
int main()
{
    int num1{1234};
    double num2{123456};
    std::string hello{"Hello"};
    // defaults
    // cout << "\n Defaults-------------------------------------------------" << endl;
    // ruler();
    // cout << num1 << num2 << hello << endl;
    // // Defaults one per line
    // cout << "\n--defaults -one per line-----------------------------------------------" << endl;
    // cout << num1 << endl;
    // cout << num2 << endl;
    // cout << hello << endl;
    // cout << "\n --width 10 for num1==========================" << endl;
    // cout << setw(10) << num1 << num2 << hello << endl;
    // cout << "\n --width 10 for num1 and num2 and widht 15 for hello" << endl;
    // ruler();
    // cout << setw(10) << num1 << setw(10) << num2 << setw(10) << hello << endl;
    // setfill
    // cout << setfill('*');
    // cout << setw(10) << left << num1 << setw(10) << left << num2 << hello << endl;
    cout << setw(10) << left << setfill('*') << num1 << setw(10) << left << setfill('#') << num2 << hello << endl;
    cout << setw(10) << right << setfill('*') << num1 << setw(10) << left << setfill('#') << num2 << hello << endl;

    return 0;
}