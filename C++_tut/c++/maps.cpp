#include <iostream>
#include <map>
#include <set>
using namespace std;
int main()
{
    map<string, int> mp{
        {"anjali", 21}, {"radhika", 23}, {"srishty", 16}};

    for (auto i : mp)
    {
        cout << i.first << ":" << i.second << endl;
    }
    cout << "\n***********************************************************" << endl;
    mp.insert(make_pair("aradhya", 10));
    mp.insert(pair<string, int>("rudra", 8));
    for (auto i : mp)
    {
        cout << i.first << ":" << i.second << endl;
    }
    cout << "\n***********************************************************" << endl;

    mp["anjali"] = 20;
    for (auto i : mp)
    {
        cout << i.first << ":" << i.second << endl;
    }
    cout << "\n***********************************************************" << endl;

    mp.erase("aradhya");
    for (auto i : mp)
    {
        cout << i.first << ":" << i.second << endl;
    }
    cout << "Count for anjali " << mp.count("anjali") << endl;

    cout << "\n***********************************************************" << endl;

    /*auto it = mp.find("radhika");
    if (it != mp.end())
        cout << "Yes she is there" << endl;
    else
        cout << "Oops she is not there" << endl;
    auto itr = mp.find("anshu");
    if (itr != mp.end())
        cout << "Yes she is there" << endl;
    else
        cout << "Oops she is not there" << endl;
        */
    mp.clear();

    map<string, set<int>> m;
    m["choco"].insert(2);
    m["choco"].insert(30);
    m["choco"].insert(25);
    m["biscuit"].insert(20);
    m["biscuit"].insert(5);
    m["icecream"].insert(5);
    for (auto i : m)
    {
        cout << i.first << ":"
             << "[ ";

        for (auto u : i.second)
            cout << u << " ";
        cout << "]" << endl;
    }

    return 0;
}