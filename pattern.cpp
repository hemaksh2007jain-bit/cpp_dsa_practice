#include<iostream>
#include <climits> 
#include <algorithm>
using namespace std;

int main() {
  int a=1;
  for(int i=1; i<6; i++){
    for(int j=0; j<i; j++){
        cout<<a<<" ";
        a++;
    }
    cout<<endl;
  }
}