// template <typename T1 ,typename T2>
#include <bits/stdc++.h>
#include <string>
using namespace std;
template <typename T>
class item
{
private:
    string name;
    T value;

public:
    item(string name, T value) : name{name}, value{value}
    {
    }
    string get_name() const { return name; }
    T get_value() const { return value; }
};
template <typename T1, typename T2>
struct My_Pair
{
    T1 first;
    T2 second;
};
int main()
{
    item<int> item1{"Frank", 100};
    cout << item1.get_name() << " " << item1.get_value() << endl;
    item<string> item2{"Frank", "professor"};
    cout << item2.get_name() << " " << item2.get_value() << endl;
    item<item<string>> item3{"Frank", {"c++", "professor"}};
    cout << item3.get_value().get_name() << " " << item3.get_value().get_value() << endl;
    return 0;
}