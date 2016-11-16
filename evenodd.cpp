#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
 vector<int> numbers={12, 37, 5, 42, 8, 3};
 vector<int> even, odd; // even and odd are empty.

 while (!numbers.empty())
 {
  int nums=numbers.back();
  numbers.pop_back(); // delete the last element of numbers.
  if (nums%2 == 0)
    even.push_back(nums); // append new even number to even
  else
    odd.push_back(nums); // append new odd number to odd
 }

 cout << "even=";
 for (auto i: even)
   cout << i << " ";
 cout << endl;
 
 cout << "odd=";
 for (auto i: odd)
   cout << i << " "; 
 cout << endl;

 return 0;
}
