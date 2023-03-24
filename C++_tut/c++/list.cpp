#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
using namespace std;
/*doubly linked list
lst.size()
l.max_size() return a very large no.
push_back()
pop_back(); emplace_back(),emplace_front(),push_front(),pop_front()
l.erase(iterator)
l.insert(it,element)
l.resize()
*/
/*#include <forward_list> to use forward list
dynamic size
list is uni-directional
direct element access is not provided
rapid insertion and deletion of elements anywhere in container
reverse iterator is not availave in forward list while present in list
l.max_size
l.front()
push_front()
pop_front()
emplace_front()
insert_after(it,num);
l.emplace_after(it,element)
l.erase_after(it);
l.resize()
*/
class Person
{
    friend ostream &operator<<(ostream &os, const Person &p);
    string name;
    int age;

public:
    Person() : name{"Unknown"}, age{0} {}
    Person(string name, int age)
        : name{name}, age{age} {}
    bool operator<(const Person &rhs) const
    {
        return (this->name == rhs.name && this->age == rhs.age);
    }
};
ostream &operator<<(ostream &os, const Person &p)
{
    os << p.name << ":" << p.age;
    return os;
}
template <typename T>
void display(const list<T> &I)
{
    cout << "[";
    for (const auto &elem : I)
    {
        cout << elem << " ";
    }
    cout << "]" << endl;
}
void test1()
{
    cout << "\n==================================================" << endl;
    list<int> l1{1, 2, 3, 4, 5};
    display(l1);
    list<string> l2;
    l2.push_back("Back");
    l2.push_front("Front");
    display(l2);
    list<int> l3;
    l3 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(l3);
    list<int> l4(10, 100);
    display(l4);
}
void test2()
{
    cout << "\n==================================================" << endl;
    list<int> l{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(l);
    cout << "Size: " << l.size() << endl;
}
void test3()
{
    cout << "\n==================================================" << endl;
    list<int> l{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(l);
    l.resize(5);
    display(l);
    l.resize(10);
    display(l);
    list<Person> persons;
    persons.resize(5);
    display(persons);
}
void test4()
{
    cout << "\n==================================================" << endl;
    list<int> l{1, 2, 3, 4, 8, 6, 7, 5, 9, 10};
    display(l);
    auto it = find(l.begin(), l.end(), 5);
    if (it != l.end())
        l.insert(it, 100);
    display(l);
    list<int> l2{1000, 2000, 3000};
    l.insert(it, l2.begin(), l2.end());
    display(l);
    advance(it, -4); // point to 100
    cout << *it << endl;
    l.erase(it); // remove the 100 then iterator  becomes invalid
    display(l);
    cout << *it << endl;
}
void test5()
{
    list<Person> stooges{
        {"larry", 18}, {"Moe", 25}, {"Curly", 17}};

    display(stooges);
    stooges.sort();
    display(stooges);
}
int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();
    return 0;
}