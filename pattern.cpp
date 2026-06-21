#include<iostream>
#include <climits> 
#include <algorithm>
using namespace std;

bool isPrime(int n){
   if(n==1){
      return false;
   }
   for(int i=2; i<=n/2; i++){
      if(n%i==0){
         return false;
      }
   }
   return true;
}

int print(int n){
   for(int i=2; i<=n; i++){
      if(isPrime(i)==true){
         cout<<i<<" ";
      }
   }
}

int main(){
  print(100);
   return 0;
}