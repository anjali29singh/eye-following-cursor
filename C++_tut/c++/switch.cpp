// control expr must evaluate an integer
// case expr must be const expr or integrals literals
// once a match occurs all following case sections executes until break is reached
// to avoid this use break statement for each case

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cout << "Enter number between 1 to 10" << endl;
    // cin >> n;
    // switch (n)
    // {
    // case 1:
    //     cout << "1 is selected ";
    // case 2:
    //     cout << "2 is selected ";
    // case 3:
    //     cout << "3 is selected ";
    // case 4:
    //     cout << "4 is selected ";
    //     break;
    // default:
    //     cout << "1,2,3,4 is Not selected";
    // }

    char letter_grade;
    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;
    switch (letter_grade)
    {
    case 'a':
    case 'A':
        cout << "You need a 90 or above ,study hard " << endl;
        break;
    case 'b':
    case 'B':
        cout << "You need 80-89 for B,go study" << endl;
        break;
    case 'c':
    case 'C':
        cout << "You need 70-79 for B,an avgs grade" << endl;
        break;
    case 'd':
    case 'D':
        cout << "You should strive for better grade .All you need is 60-69" << endl;
        break;
    case 'f':
    case 'F':
        cout << "very poor" << endl;
        break;

    default:
        cout << "sorry,not a valid grade" << endl;
    }

    return 0;
}