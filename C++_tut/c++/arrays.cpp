/* arrays are fixed in size
2.elements are all the same type
3.stored contiguously in memory
4.each element can be accessed by index
5. no check to see if you are out of bounds
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{ // initialize arrays
    int test_scores[5]{1, 2, 3, 4, 5};
    int high_scores[10]{3, 5}; // init to 3 ,6 and rest to 0
    const int days_in_year{365};
    double hi_tempt[days_in_year]{0};    // init  all to 0
    int another_arr[]{1, 2, 3, 4, 5, 6}; // size automatically calculated
    // accessing array
    cout << test_scores[0] << endl;
    test_scores[0] = 20;
    cout << test_scores[0] << endl;
    int age[5];    // contains garbage
    int name[5]{}; // contains 0 in all
    cout << name << endl;

    // Multidimensional array
    // 2D array
    int matrix[3][4];
    return 0;
}