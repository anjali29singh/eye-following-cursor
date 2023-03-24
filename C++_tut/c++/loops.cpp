#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for loop
    // int i{0};
    // for (i = 1; i <= 5; i++)
    //     cout << i << endl;
    // we can have for loop with expressions that is endless loop
    // for (;;)
    //     cout << "Endless loop" << endl;
    // for (int j = 1; j <= 10; j += 2)
    //     cout << j << endl;
    // for (int i{10}; i > 0; --i)
    //     cout << i << endl;
    // for (int i = 1, j = 5; i <= 5; i++, j++)
    //     cout << i << " " << j << endl;

    // for (int i = 1; i <= 100; i++)
    // {
    //     cout << i;
    //     if (i % 10 == 0)
    //         cout << endl;
    //     else
    //         cout << " ";
    // }
    /****************************************************************************************/

    // range base for loop
    /*int scores[]{10, 20, 30, 40, 50};
    for (auto i : scores)
        cout << i << endl;*/
    /*vector<double> temperatures{87.9, 56.8, 23.7, 72.5};
    double total{0};
    double avg_tempt;
    for (auto tempt : temperatures)
        total += tempt;
    avg_tempt = total / temperatures.size();
    cout << fixed << setprecision(2);
    cout << avg_tempt << endl;*/

    /*for (auto c : "Anjali")
    {
        if (c == ' ')
            cout << "\t";
        else
            cout << c;
    }
    */

    /****************************************************************************************/
    // While loop
    int i = 1;
    while (i <= 10)
    {
        cout << i << endl;
        i++;
    }
    return 0;
}