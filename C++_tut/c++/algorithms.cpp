/* include standard template library of algorithm
all stl algorithm expect iterators as arguments
iterators points to container elements
find algorithm tries to locate the first occurence of and element
find algorithm returns iterator pointing to located element or end()
 */
/*for_each algorithm applies a function to each element in container*/
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <cctype>
using namespace std;
class Person
{

    string name;
    int age;

public:
    Person() = default;
    Person(string name, int age)
        : name{name}, age{age}
    {
    }
    bool operator<(const Person &rhs) const
    {
        return this->age < rhs.age;
    }
    bool operator==(const Person &rhs) const
    {
        return (this->name == rhs.name && this->age == rhs.age);
    }
};

// find element in container
void find_test()
{

    cout << "\n===============================================" << endl;
    vector<int> vec{1, 2, 3, 4, 5};
    // auto loc=find(vec.begin(),vec.end(),1) same as below;
    auto loc = find(begin(vec), end(vec), 1);
    if (loc != end(vec))
        cout << "Found the number: " << *loc << endl;
    else
        cout << "Counldn't find the number: " << endl;
    list<Person> player{{"larry", 18},
                        {"moe", 20},
                        {"curly", 21}

    };
    auto loc1 = find(player.begin(), player.end(), Person{"moe", 20});
    if (loc1 != player.end())
        cout << "Found Moe" << endl;
    else
        cout << "Moe not found " << endl;
}
void count_test()
{
    cout << "\n============================================" << endl;
    vector<int> vec{1, 2, 3, 4, 5, 1, 2, 1};
    int num = count(vec.begin(), vec.end(), 1);
    cout << num << " occurrence found " << endl;
}
void count_if_test()
{

    // count only if element is even
    vector<int> vec{1, 2, 3, 4, 6, 2, 5, 1, 8};
    int num = count_if(vec.begin(), vec.end(), [](int x)
                       { return x % 2 == 0; });
    cout << num << " even numbers found" << endl;

    int num2 = count_if(vec.begin(), vec.end(), [](int y)
                        { return y % 2 != 0; });
    cout << num2 << " odd numbers found" << endl;
}
void replace_test()
{

    cout << "\n=============================================" << endl;
    vector<int> vec{1, 2, 3, 4, 5, 1, 2, 1};
    for (auto i : vec)
    {
        cout << i << " ";
    }
    cout << endl;
    replace(vec.begin(), vec.end(), 1, 100);
    for (auto i : vec)
        cout << i << " ";
    cout << endl;
}
void string_transform_test()
{
    cout << "\n=============================================" << endl;
    string str1{"this is a tes"};
    cout << "Before transform: " << str1 << endl;
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    cout << "After transform: " << str1 << endl;
}
int main()
{
    // find_test();
    // count_test();
    count_if_test();
    replace_test();
    string_transform_test();
    return 0;
}