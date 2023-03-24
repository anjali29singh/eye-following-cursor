#include <bits/stdc++.h>
using namespace std;
int main()
{ // container in the standard template library
  // dynamic size
  // elements are stored contiguously in memory
  //  vector can grow and shrink at execution time
  //  syntax are similar to array
  //  can provide bound checking
  //  stores elements of same type

  vector<int> age(5); // automatically initialize to 0
  // for (int i = 0; i < 5; i++)
  //     cout << age[i] << endl;
  vector<double> tempt(10, 80.4); // size of vector=10 and each item is initialized with 80.4

  // accessing vector elements;
  cout << tempt[0] << endl;
  cout << tempt.at(1) << endl;
  tempt.at(4) = 60.5;
  // push_back to add elemets to vector
  vector<char> vowels{'a', 'e', 'i', 'o', 'u'};
  cout << vowels.size() << endl;
  // two dimensional vectors
  vector<vector<int>> movies_rating{
      {1, 2, 3, 4}, {1, 3, 5, 6}, {4, 6, 2, 7}};
  cout << movies_rating[0][0] << endl;
  cout << movies_rating[0][1] << endl;
  cout << movies_rating[0][2] << endl;
  cout << movies_rating[0][3] << endl;
  // expressions is a sequence of operators and operands that specifies a computation
  // statements are the complete line of code that perform some action and ends with ;

  int x;           // declaration statement
  int fav_int = 5; // assignment
  vector<int> arr[5];
  for (int i = 0; i < 5; i++)
    arr[i].push_back(i + 1);

  return 0;
}
