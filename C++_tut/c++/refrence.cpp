#include <iostream>
using namespace std;
#include <string>
#include <vector>
int main()
{
    int num{100};
    int &ref{num};
    cout << num << endl;
    cout << ref << endl;
    num = 200;
    cout << " =================================================" << endl;
    cout << num << endl;
    cout << ref << endl;
    vector<string> stooges{"Larry", "Moe", "Curly"};
    for (auto str : stooges)
    {
        str = "Funny"; // str is copy of the each vector element
    }
    for (auto str : stooges)
    {
        cout << str << endl;
    }
    cout << "==========================================" << endl;
    for (auto &str : stooges) // str is a refrence of each vector element
    {
        str = "Funny";
    }
    for (auto str : stooges)
        cout << str << endl;

    return 0;
}