/*to use standard arrays you must include #include<array>
this array is object
fixed size,direct access of elements,use instead of raw array
 */
// syntax  array<data_type,size> array_name;
// array_name.size()
#include <iostream>
#include <algorithm>
#include <array>
#include <string>
#include <numeric>
using namespace std;
void display(const array<int, 5> &arr)
{
    cout << "[";
    for (const auto &i : arr)
        cout << i << " ";
    cout << "]" << endl;
}
void test1()
{
    cout << "\n=========================================" << endl;
    array<int, 5> arr1{1, 2, 3, 4, 5};
    array<int, 5> arr2;
    display(arr1);
    display(arr2); // elements are not initialized(contains gabage)
    arr2 = {10, 20, 30, 40, 50};
    display(arr1);
    display(arr2);
    cout << "size of arr1 is: " << arr1.size() << endl;
    cout << "size of arr2 is: " << arr2.size() << endl;
    arr1[8] = 1000; // no bounds checking
    arr1[0] = 1000;
    arr1.at(1) = 2000; // do bounds checking
    display(arr1);
    cout << "Front of arr2: " << arr2.front() << endl;
    cout << "Back of arr2: " << arr2.back() << endl;
}
void test2()
{
    cout << "\n=========================================" << endl;
    array<int, 5> arr1{1, 2, 3, 4, 5};
    array<int, 5> arr2{10, 20, 30, 40, 50};
    display(arr1);
    display(arr2);
    arr1.fill(0); // replace all elements with 0
    display(arr1);
    display(arr2);
    arr1.swap(arr2);
    display(arr1);
    display(arr2);
}
void test3()
{
    cout << "\n=========================================" << endl;
    array<int, 5> arr1{1, 2, 3, 4, 5};
    int *ptr = arr1.data();
    cout << ptr << endl;
    *ptr = 10000;
    display(arr1);
}
void test4()
{
    cout << "\n=========================================" << endl;
    array<int, 5> arr1{1, 2, 3, 4, 5};
    display(arr1);
    sort(arr1.begin(), arr1.end());
    display(arr1);
}
void test5()
{
    cout << "\n=========================================" << endl;
    array<int, 5> arr1{1, 2, 3, 4, 5};

    auto max_num = max_element(arr1.begin(), arr1.end());
    auto min_num = min_element(arr1.begin(), arr1.end());

    cout << "min: " << *min_num << " max: " << *max_num << endl;
}
void test6()
{
    cout << "\n=========================================" << endl;
    array<int, 5> arr1{1, 2, 3, 3, 5}; // double {{}}
    auto adjacent = adjacent_find(arr1.begin(), arr1.end());
    if (adjacent != arr1.end())
        cout << "adjacent element found with value: " << *adjacent << endl;
    else

        cout << " no adjacent element found: " << endl;
}
void test7()
{
    cout << "\n=========================================" << endl;
    array<int, 5> arr1{1, 2, 3, 3, 5};
    // accumulate if from #include <numeric>
    int sum = accumulate(arr1.begin(), arr1.end(), 0);
    cout << "sum of elements of array is: " << sum << endl;
}
void test8()
{
    cout << "\n=========================================" << endl;
    array<int, 10> arr1{1, 2, 3, 4, 1, 4, 2, 3, 3, 3};
    int Count = count(arr1.begin(), arr1.end(), 3);
    cout << "found 3: " << Count << " times" << endl;
}
void test9()
{
    cout << "\n=========================================" << endl;
    array<int, 10> arr1{1, 2, 3, 50, 60, 70, 80, 200, 300, 400};
    int Count = count_if(arr1.begin(), arr1.end(), [](int x)
                         { return (x > 10 && x < 200); });
    cout << "numbers greater than 10 and less than 200 are: " << Count << endl;
}
int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();

    return 0;
}