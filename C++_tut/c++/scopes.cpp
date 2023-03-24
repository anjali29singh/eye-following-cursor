// local scope or global scope
#include <iostream>
using namespace std;
int num{300}; // Global variable declared outside any class or function
int main()
{
    int num(100);  // local to main
    int num1{500}; // local to main
    cout << "local num is: " << num << " in main " << endl;
    {
        // creates new level of scope
        int num{200};
        cout << "Local num is " << num << " in inner block in main" << endl;
        cout << "inner block in main can see out num1 is:  " << num1 << endl;
    }
    return 0;
}