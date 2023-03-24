#include <iostream>
#include <deque>
#include <string>
#include <vector>
using namespace std;
template <typename T>
void display(const deque<T> &d)
{
    cout << "[";
    for (const auto &elem : d)
    {
        cout << elem << " ";
    }
    cout << "]" << endl;
}

void test1()
{
    cout << "\n==============================================" << endl;
    deque<int> d{1, 2, 3, 4, 5};
    display(d);
    deque<int> d1(10, 100);
    display(d1);
    d[0] = 100;
    d.at(1) = 200;
    display(d);
}
void test2()
{
    // push and pops
    cout << "\n==================================================" << endl;
    deque<int> d{0, 0, 0};
    display(d);
    d.push_back(10);
    d.push_back(20);
    display(d);
    d.push_front(100);
    d.push_front(200);
    cout << "Front: " << d.front() << endl;
    cout << "Back: " << d.back() << endl;
    cout << "size: " << d.size() << endl;
    d.pop_back();
    d.pop_front();
    display(d);
}
void test3()
{

    cout << "\n==================================================" << endl;
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    deque<int> d;
    for (auto &i : vec)
    {
        if (i % 2 == 0)
            d.push_back(i);
    }
    display(d);
}
void test4()
{

    cout << "\n==================================================" << endl;
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    deque<int> d;
    for (const auto &i : vec)
    {
        d.push_front(i);
    }
    display(d);
}
void test5()
{

    cout << "\n==================================================" << endl;
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> d;
    copy(vec.begin(), vec.end(), front_inserter(d));
    display(d);
    d.clear();
    copy(vec.begin(), vec.end(), back_inserter(d));
    display(d);
}
int main()
{ /*deque (double ended queue)
can expand and contract as needed
elements are not stored in contiguous memory
direct element access in constant time
rapid insertion and deletion

*/
    // initialization
    deque<int> d{1, 2, 3, 4, 5};
    deque<int> d1(10, 100); // ten 100s
    // front() return first element
    // back() last element of deque
    //  push_back()
    // push_front()
    // max_size =a very large no.
    // pop_back(),pop_front()
    // emplace_back =add to back efficiently
    // emplace_front add to front efficiently
    test1();
    test2();
    test3();
    test4();
    test5();

    return 0;
}