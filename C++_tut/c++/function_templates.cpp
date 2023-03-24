#include <bits/stdc++.h>
using namespace std;
// template function

// template<typename T1,typename T2>
template <typename T> // replaces T with data types passed
// template <class t>//this is also same
T Max(T a, T b)
{
    return ((a > b) ? a : b);
}
template <typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
template <typename T1, typename T2>
void func(T1 a, T2 b)
{
    cout << a << " " << b << endl;
}
int main()
{
    // cout << Max<int>(56, 78) << endl;
    func(56, 72);
    func(100.5, 56.7);
    int a, b;
    cin >> a >> b;
    cout << "values before swaping: " << a << " " << b << endl;
    Swap(a, b);
    cout << "values after swaping: " << a << " " << b << endl;

    return 0;
}