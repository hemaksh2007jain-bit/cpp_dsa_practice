#include<iostream>
#include <climits> 
#include <algorithm>
using namespace std;

int main() {
   for(int i=0; i<5; i++){
    for(int j=4-i; j>=0; j-- ){
        cout<<" ";
    }
    for(int k=i+1; k>=1; k--){
        cout<<k;
    }
    for(int l=i+2; l<=5; l++){
        cout<<l;
    }
    cout<<endl;
   }
}