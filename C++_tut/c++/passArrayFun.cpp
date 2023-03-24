// passing arrays to function
// array elements are not copied
// array name evaluates the location of array in memory and this address is copied

#include <iostream>
using namespace std;
void print_array(int arr[], size_t size);

void set_array(int arr[], size_t size, int value);
void print_array(int arr[], size_t size)
{

    for (size_t i{0}; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void set_array(int arr[], size_t size, int value)
{
    for (size_t i{0}; i < size; i++)
        arr[i] = value;
}
int main()
{
    // syntax void function_name( data_type arr_name[])
    int my_score[]{100, 98, 90, 86, 84};
    print_array(my_score, 5);
    set_array(my_score, 5, 100);
    print_array(my_score, 5);

    return 0;
}
