#include<iostream>
#include <climits> 
#include <algorithm>
using namespace std;

int binomial(int n){
  int num=1;
     for(int i=1; i<=n; i++){
     num=num*i;
 }
    return num;
}

int coeff(int n, int r){
  int val1=binomial(n);
  int val2=binomial(r);
  int val3=binomial(n-r);
  int ans=val1/(val2*val3);
  return ans;
}

int main() {
   int result = coeff(5, 2);
   cout << "The binomial coefficient C(5, 2) is: " << result << endl;
   return 0;
}