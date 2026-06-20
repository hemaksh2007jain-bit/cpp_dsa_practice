#include<iostream>
#include <climits> 
#include <algorithm>
using namespace std;

int main() {
  int a;
  cout<<"enter a number: ";
  cin>>a;
  int original = a;
  int reversed = 0;

  while (a > 0) {
    int r = a % 10;
    reversed = reversed * 10 + r;
    a = a / 10;
  }

  if (reversed == original) {
    cout<<"palindrome";
  }
  else {
    cout<<"not palindrome";
  }
}