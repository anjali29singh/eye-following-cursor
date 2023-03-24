#include <iostream>
using namespace std;
#include <string>
int main()
{
    /*int score[]{100, 78, 95, 89, -1};
    int *score_ptr{score};
    while (*score_ptr != -1)
    {
        cout << *score_ptr << endl;
        score_ptr++;
    }
    score_ptr = score;
    while (*score_ptr != -1)
    {
        cout << *score_ptr++ << endl; // equivalent to above
    }
*/
    /*cout << "-----------------------------------------------------------" << endl;
    string s1{"Frank"};
    string s2{"Frank"};
    string s3{"James"};

    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};
    cout << boolalpha;
    cout << p1 << " == " << p2 << " : " << (p1 == p2) << endl;
    cout << p1 << " == " << p3 << " : " << (p1 == p3) << endl;
    cout << *p1 << " == " << *p2 << " : " << (*p1 == *p2) << endl;
    cout << *p1 << " == " << *p3 << " : " << (*p1 == *p3) << endl;*/

    // constants and pointer
    int high_score{90};
    int low_score{10};
    // const int *score{&high_score};
    //*score=100; //error since score pointer is pointing to constant whose  value  is not change able
    //  score=&low_score //we can change pointer
    cout << "-------------------------------------" << endl;
    // int *const score_ptr{&high_score};
    //  score_ptr = &low_score; // error becuase  pointer is  const that is it will only point to high score;
    //*score_ptr = 100; //ok
    cout << "----------------------------------------" << endl;
    const int *const score_ptr{&high_score};
    // *score_ptr=99; //error
    // score_ptr=&low; //error;
    return 0;
}