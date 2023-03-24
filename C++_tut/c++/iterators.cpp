#include <bits/stdc++.h>
#include <string>
using namespace std;

// cbegin() and cend() for const_iterator
// begin() and bend() for iterator
// rbegin() and rend() for reverse_iterator
// crbegin() and crend() for const_reverse_iterator

int main()
{
    vector<int> vec{6, 5, 3, 2, 8, 9};

    // vector<int>::iterator it = vec.begin();
    vector<int>::iterator it = vec.begin();
    vector<int>::reverse_iterator rev_it = vec.rbegin();

    vector<char> suits{'A', 'B', 'Y', 'T'};

    auto t = suits.begin();
    while (it != vec.end())
    {
        cout << *it << " " << endl;
        ++it;
    }
    while (rev_it != vec.rend())
    {
        cout << *rev_it << " ";
        rev_it++;
    }
    cout << endl;

    while (t != suits.end())
    {
        cout << *t << endl;
        t++;
    }
    return 0;
}