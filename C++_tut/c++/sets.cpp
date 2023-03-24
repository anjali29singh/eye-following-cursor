#include <iostream>
#include <set>
using namespace std;
int main()
{ // sets do not support front or back
    // to add elements in set use set.insert()
    // multisets can have duplicates
    // s.clear()  //all element removed
    // s.erase(itme)
    set<int> s1{1, 3, 5, 6, 1, 5, 8, 2, 3, 10, 6}; // remove dublicates and sort automatically
    for (auto i : s1)
        cout << i << " ";
    cout << endl;
    // if inserted element is not present then it is added to set otherwise not
    s1.insert(19);
    cout << "\n================================================" << endl;
    for (auto i : s1)
        cout << i << " ";
    s1.insert(1);
    cout << "\n================================================" << endl;

    for (auto i : s1)
        cout << i << " ";
    set<int> s2;
    s2 = s1; // set is assignable
    cout << "\n================================================" << endl;
    for (auto i : s2)
        cout << i << " ";
    s1.clear();
    cout << "\n================================================" << endl;
    for (auto i : s1)
        cout << i << " ";
    // auto it = s2.find(5);
    auto it = s2.find(11);
    if (it != s2.end())
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
    set<string> s3;
    s3.insert("pooja");
    s3.insert("himanshi");
    s3.insert("tiya");

    s3.emplace("radhika");
    s3.emplace("srishty");
    for (auto i : s3)
        cout << i << " ";
    return 0;
}