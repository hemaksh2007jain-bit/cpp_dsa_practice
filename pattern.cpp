#include <iostream> 
#include <climits> 
#include <algorithm> 
using namespace std;

int kadane(int n, int *array){
   int maxsum=INT_MIN;
   int currsum=0;
   for(int i=0; i<n; i++){
      currsum=currsum+array[i];
      maxsum=max(currsum,maxsum);
      if(currsum<0){
         currsum=0;
      }
   }
   return maxsum;

}

int main() {
   int array[]={-1,-2,-3,-4,5,-6,-7};
   int n=sizeof(array)/sizeof(int);
   cout<<kadane(n,array);

   return 0;
}