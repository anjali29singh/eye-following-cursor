#include <iostream>
using namespace std;
int main()
{
    int *int_ptr{nullptr};
    int_ptr = new int; // allocate an integer on the heap
    delete int_ptr;    // frees the allocated storage

    return 0;
}