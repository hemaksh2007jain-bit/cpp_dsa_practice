#include <iostream> 
#include <climits> 
#include <algorithm> 
using namespace std;

int subsum(int n, int *array){
   int maxsum=INT_MIN;
    for(int i=0; i<n; i++){
      int currsum=0;
      for(int j=i; j<n; j++){
         currsum=currsum+array[j];
         maxsum=max(maxsum,currsum);
      }
    }
    return maxsum;
}

int main() {
   int array[]={2,-3,6,-5,4,2};
   int n=sizeof(array)/sizeof(int);
   cout<<subsum(n,array);

   return 0;
}
