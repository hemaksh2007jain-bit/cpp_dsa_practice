#include<iostream>
#include <climits> 
#include <algorithm>
using namespace std;

int binary(int n){
   int sum=0;
   int power=1;
   while(n>0){
      int rem=n%2;
      sum=sum+rem*power;
      power=power*10;
      n=n/2;
   }
   return sum;
}

int main(){
  int ans=binary(18);
  cout << ans;
  return 0;
}