#include <iostream>
using namespace std;
const double pi = 3.14;
double calc_area_circle(double radius)
{

    return pi * radius * radius;
}
double calc_vol_cycl(double radius, double height)
{

    return pi * radius * radius * height;
}
void volume_cyclinder()
{
    double radius, height;
    cout << "Enter the radius of cylinder: ";
    cin >> radius;
    cout << "\n Enter the height of cyclinder: ";
    cin >> height;
    cout << "The volume of cyclinder with radius " << radius << " and height " << height << " is " << calc_vol_cycl(radius, height) << endl;
}
void area_circle()
{
    double radius;
    cout << "\nEnter the radius of circle:";
    cin >> radius;
    cout << "The area of circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}
int main()
{
    area_circle();
    volume_cyclinder();

    return 0;
}