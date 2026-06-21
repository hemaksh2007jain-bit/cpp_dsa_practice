#include<iostream>
#include <climits> 
#include <algorithm>
using namespace std;

int binary(int n){
   int power=1;
   int sum=0;
   while(n>0){
      int r=n%10;
      sum=sum+r*power;
      power=power*2;
      n=n/10;
   }
   return sum;
}

int main(){
  int ans=binary(10010);
  cout<<ans;
   return 0;
}