/*not(!) has higher precedence than and(&&) ,and has higher
precedence than or (||)
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    const int lower{10};
    const int upper{20};
    cout << boolalpha;
    cout << "enter an integer -bounds are " << lower << " and " << upper << ":";
    cin >> num;
    bool within_bounds{false};
    within_bounds = (lower < num && num < upper);

    cout << num << " is between " << lower << " and " << upper << ":" << within_bounds << endl;
    return 0;
}