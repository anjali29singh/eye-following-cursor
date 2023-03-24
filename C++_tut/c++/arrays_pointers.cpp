#include <iostream>
using namespace std;
int main()
{
    int scores[]{100, 98, 75};
    int *scores_ptr{scores}; // no need to use & since name of arrays is address
    cout << "The value of scores is: " << scores << endl;
    cout << "The value of score pointer is: " << scores_ptr << endl;
    cout << "array subcript notation -------------------------" << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;

    cout << "Pointer subscript notation -------------------------------------" << endl;
    cout << scores_ptr[0] << endl;
    cout << scores_ptr[1] << endl;
    cout << scores_ptr[2] << endl;
    cout << "pointer offset notation-----------------------------------" << endl;
    cout << *(scores_ptr + 0) << endl;
    cout << *(scores_ptr + 1) << endl;
    cout << *(scores_ptr + 2) << endl;
    cout << "array offset notation --------------------------------------------" << endl;
    cout << *scores << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;

    return 0;
}