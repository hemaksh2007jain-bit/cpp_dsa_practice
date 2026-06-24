#include <iostream> 
#include <climits> 
#include <algorithm> 
using namespace std;



int main() {
   int array[]={5,4,1,6,3,2,7};
   int n=sizeof(array)/sizeof(int);
   for(int i=0; i<n; i++){
      for(int j=i; j>=0; j--){
         if(array[j]>array[j+1]){
            swap(array[j],array[j+1]);
         }
      }
      
   }

   for(int i=0; i<n; i++){
      cout<<array[i];
   }
   return 0;
}
