#include <iostream> 
#include <climits> 
#include <algorithm> 
using namespace std;



int main() {
   int array[]={1,4,1,0,3,2,4,0,3,7};
   int n=sizeof(array)/sizeof(int);
   int maxi=array[0];
   for(int i=1; i<n; i++){
      maxi=max(maxi,array[i]);
   }
   int idx=maxi+1;
   int freq[idx]={0};
   for(int i=0; i<n; i++){
      freq[array[i]]++;
   }
   for(int i=0; i<=maxi; i++){
      while(freq[i]>0){
         cout<<i<<" ";
         freq[i]--;
      }
   }
   return 0;
}