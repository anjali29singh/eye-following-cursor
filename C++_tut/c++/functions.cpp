#include <iostream>
#include <cmath>
#include <ctime>   //required time
#include <cstdlib> //required for rand()
using namespace std;
int main()
{

    double num;
    cout << "Enter a number(double) ";
    cin >> num;
    cout << "The square root of " << num << " is: " << sqrt(num) << endl;
    cout << "The cube root of " << num << "is: " << cbrt(num) << endl;
    cout << "The ceil of " << num << "is: " << ceil(num) << endl;
    cout << "The floor of " << num << "is:" << floor(num) << endl;
    cout << "The sine of " << num << "is :" << sinl(num) << endl;
    cout << "The round of " << num << "is: " << round(num) << endl;

    /*int random_num;
    int count = 10; // two generate 10 random numbers btw 1 to 10
    int min = 1;
    int max = 10;
    cout << "RAND_MAX on my system is " << RAND_MAX << endl;
    srand(time(nullptr));
    for (int i = 1; i <= count; i++)
    {
        random_num = (rand() % max + min); // generate random num (min,max)
        cout << random_num << endl;
    }*/
    return 0;
}