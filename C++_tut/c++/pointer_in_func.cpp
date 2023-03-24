#include <iostream>
#include <vector>
#include <string>
using namespace std;
/*void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}*/
void display(vector<string> *v)
{
    (*v).at(0) = "Funny";
    for (auto str : *v)
        cout << str << " ";
    cout << endl;
}
int main()
{
    /*int x, y;
    cin >> x >> y;
    cout << "The value of x and y are: " << x << " " << y << endl;
    swap(&x, &y);
    cout << "The value of x and y are: " << x << " " << y << endl;*/
    // cout << "*-----------------------------------*" << endl;
    // vector<string> stooges{"larry", "moe", "curly"};
    // display(&stooges);

        return 0;
}