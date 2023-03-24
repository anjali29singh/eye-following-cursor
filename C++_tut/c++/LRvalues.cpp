#include <iostream>
using namespace std;
int main()
{

    // L values that have names and are addressavle
    // modifiable if they are not constants
    int x{100}; // x is l value
    // 100=x //100 is not L value .it is R value
    // R value (non addressable and non assignable)
    return 0;
    // R value can be assigned to L value
    int &ref1 = x; // ref1 is refrence to l value
}