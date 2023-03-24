#include <iostream>
using namespace std;
#include <string>
#include <vector>
int main()
{
    // pointer is a variable that stores address
    /*/ int *num_ptr;       // num pointer is pointer to integer
     double *double_ptr; // uninitialized pointer points anywhere where as null ptr points nowhere
     string *str{nullptr};
     int *letter{};
     cout << num_ptr << endl;
     cout << str << endl;
     cout << letter << endl; */
    /*int num{10};
    cout << num << endl; // 10
    cout << sizeof num << endl;
    cout << &num << endl; // address of variable num*/
    // in pointers

    /*int *p;
    cout << "The value of p is: " << p << endl; // garbage
    cout << "The address of p is " << &p << endl;
    cout << "size of p is " << sizeof p << endl;
    p = nullptr;
    cout << "The value of p is: " << p << endl;
    int *p1{nullptr};
    double *p2{nullptr};
    vector<string> *p3{nullptr};
    string *p4{nullptr};
    cout << "The size of pointer p1: " << sizeof p1 << endl;
    cout << "The size of pointer p2: " << sizeof p2 << endl;
    cout << "The size of pointer p3: " << sizeof p3 << endl;
    cout << "The size of pointer p4: " << sizeof p4 << endl;
    int num{10};
    double score{205.6};
    int *ptr{nullptr};
    ptr = &num;
    cout << "The value of num is: " << num << endl;
    cout << "The address of num is: " << &num << endl;
    cout << "The value of ptr is: " << ptr << endl;*/

    // defrencing of pointer :accessing data where the pointer is pointing to
    /*double high_temp{100.8};
    double *ptr{&high_temp};
    cout << ptr << endl;
    cout << &high_temp << endl;
    cout << *ptr << endl;
    *ptr = 125.6;
    cout << *ptr << endl;
    high_temp = 200.5;
    cout << *ptr << endl;*/
    int num = 10;
    int *ptr1 = &num;
    int *ptr2;
    ptr2 = ptr1;
    cout << ptr1 << " " << ptr2 << " " << &num << endl;

    return 0;
}