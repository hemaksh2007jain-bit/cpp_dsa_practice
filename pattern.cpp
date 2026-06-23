#include <iostream> 
#include <climits> 
#include <algorithm> 
using namespace std;


int main() {
   int array[]={7,1,5,3,6,4};
   int n=sizeof(array)/sizeof(int);
   int buy[n];
   buy[0]=INT_MAX;
   for(int i=0; i<n; i++){
     if(buy[i]>array[i]){
      buy[i+1]=array[i];
     }else{
      buy[i+1]=buy[i];
     }
   }
   int profit=array[0]-buy[0];
   for(int i=1; i<n; i++){
      int mini=array[i]-buy[i];
      if(mini>0){
          profit=max(profit,mini);
      }
   }
   cout<<profit;
   return 0;
}
