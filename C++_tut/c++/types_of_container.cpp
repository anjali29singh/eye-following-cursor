// there are three categories of container
// 1.sequence container-array,vector,list,forward-list,deque
// 2. associative -container :set,map,multi map,multi set
// 3.container adapters :stack,queue,priority queue
// generic programming:
// macros has no data type
// #define pi 3.14
//#define max_size 1000 //we can use this without specifying data type
#include <bits/stdc++.h>
using namespace std;
#include <string>
#define Max(a, b) ((a > b) ? a : b)
// here we are using different function for different data type
// all doing the same function campare
// instead of this we can use macros
/*int compare(int a, int b)
{
    return ((a > b) ? a : b);
}
double compare(double a, double b)
{
    return ((a > b) ? a : b);
}
char compare(char a, char b)
{
    return ((a > b) ? a : b);
}
*/
int main()
{
    // cout << compare(10, 30) << endl;
    // cout << compare(28.9, 12.5) << endl;
    // cout << compare('A', 'B') << endl;
    cout << Max(10, 30) << endl;
    cout << Max(23.5, 19.8) << endl;

    return 0;
}