#include <iostream>
#include <string>
#include <iomanip> //must include for manipulators
using namespace std;
int main()
{ // manipulators boolean
    /* int num1{10};
     int num2{50};
     int num3{50}, sum = 0;
     string s1 = "anjali";
     string s2 = "anjali";
     cout << "By default noboolalpha: " << (num1 == num2) << endl;
     cout << boolalpha;
     cout << "Boolalpha : " << (num2 == num3) << endl;
     cout << noboolalpha;
     cout << (num1 == num3) << endl;
     cout.setf(ios::boolalpha);
     cout << (s1 == s2) << endl;
     cout << resetiosflags(ios::boolalpha);
     cout << (40 == 40) << endl;*/

    // manipulators integers
    /* int num{255};
     cout << "\n--------------------------------------------" << endl;
     cout << dec << num << endl;
     cout << hex << num << endl;
     cout << oct << num << endl;
     cout << "\n--------------------------------------------------------" << endl;
     cout << showbase;
     cout << dec << num << endl;
     cout << hex << num << endl;
     cout << oct << num << endl;
     cout << "\n----------------------------------------------------" << endl;
     cout << showbase << uppercase;
     cout << dec << num << endl;
     cout << hex << num << endl;
     cout << oct << num << endl;
     cout << "\n----------------------------------------------------" << endl;
     cout << showpos;
     cout << dec << num << endl;
     // setting using the set method
     cout.setf(ios::showbase);
     cout.setf(ios::uppercase);
     cout.setf(ios::showpos);
     cout << resetiosflags(ios::basefield);
     cout << resetiosflags(ios::uppercase); // set to default behaviour(lowercase)
     cout << resetiosflags(ios::showpos);   // set to not to show + sign for positive no.
     */
    cout << "stream manipulating for floating point" << endl;
    double num1{123456789.987654321};
    double num2{1234.5678078}; // 6 digit precision
    double num3{1234.0};
    double num4{123.567}; // by default 6 digit precision
    // using default settings
    cout << "Defaults------------------------------------------" << endl;
    // cout << num1 << endl;
    // cout << num2 << endl;
    // cout << num3 << endl;
    // cout << num4 << endl;
    // cout << setprecision(2);
    // cout << "set precision 2 ====================" << endl;
    // cout << num1 << endl;
    // cout << num2 << endl;
    // cout << num3 << endl;
    // cout << num4 << endl;
    cout << setprecision(5);
    cout << "set precision 5 ====================" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    cout << num4 << endl;
    cout << setprecision(3) << fixed; // precision will applied after decimal
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    cout << num4 << endl;
    cout << "==============================================" << endl;
    cout << setprecision(3) << scientific << uppercase;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    cout << num4 << endl;

    return 0;
}