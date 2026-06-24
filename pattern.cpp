#include <iostream> 
#include <climits> 
#include <algorithm> 
using namespace std;

bool isRepeat(int *array, int n){
   sort(array,array+6);
   for(int i=0; i<n; i++){
      if(array[i]==array[i+1]){
         return false;
         break;
      }
   }
   return true;
}

int main() {
   int array[]={7,1,5,3,1,6,4};
   int n=sizeof(array)/sizeof(int);
   int ans=isRepeat(array,n);
   cout<<ans;
   return 0;
}
