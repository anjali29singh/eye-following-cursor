// c++ strings is a class of std template lib
// in order to use it you must include <string>
// stored contiguously in memeory and dynamic in nature while cstring is fixed

#include <bits/stdc++.h>
using namespace std;
#include <string>
int main()
{
    /*string s1;
    string s2{"frank"};       // frank
    string s3{s2};            // frank
    string s4{"frank", 3};    // fra
    string s5{"frank", 0, 2}; // fr
    string s6{3, 'x'};        // xxx
    */
    /*string s1{"Apple"};
    string s2{"Banana"};
    string s3{"kiwi"};
    string s4{"apple"};
    string s5{s1};
    cout << boolalpha;
    cout << (s1 == s5) << endl;
    cout << (s1 != s2) << endl;
    cout << (s1 == s2) << endl;
    cout << (s1 > s2) << endl;
    cout << (s2 > s1) << endl;
    cout << (s4 < s5) << endl;
    cout << (s1 == "Apple") << endl;
    */
    string name{"my name is anjali"};
    // cout << name.find("is") << endl;
    // cout << name.find("k") << endl; // npos
    // name.erase(1, 5);
    // name.clear(); // empties string name
    // cout << name << endl;
    /*int n = name.length();
    cout << n << endl;

    string str; // hello there
    // cin >> str; // only accepts upto first space;
    // cout<<str<<endl;
    // getline(cin,str);   //read entire line until \n
    // cout<<str<<endl; //hello there
    getline(cin, str, 'x'); // this isx;
    cout << str << endl;
    */
    /*string s1, s2, s3, s4, s5{"Apple"};
    s1 = "watermelon";
    cout << "s1 is now " << s1 << endl;
    cout << s1.substr(3, 8) << endl;
    s2 = s1;
    cout << "s2 is now " << s2 << endl;
    s3 = "Frank";
    cout << "s3 is now " << s3 << endl;
    s3[0] = 'C';
    cout << "s3 is now " << s3 << endl;
    s3.at(0) = 'P';
    cout << "s3 is now " << s3 << endl;
    // s3 = "nice" + "cold" + s2 + "juice"; // compiler error
    */
    string state = "the secret word is Boo";
    string word;
    cout << "Enter the word you want to find: " << endl;
    cin >> word;
    if (state.find(word) != string::npos)
        cout << "Found " << word << " at position " << state.find(word) << endl;
    else
        cout << "Not found" << endl;
    return 0;
}