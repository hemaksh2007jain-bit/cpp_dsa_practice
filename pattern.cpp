#include <iostream> 
#include <climits> 
#include <algorithm> 
using namespace std;



int main() {
   int matrix[4][4]={{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}};
                     
   int n=4;
   int m=4;
   int strow=0;
   int stcol=0;
   int endrow=n;
   int endcol=m;
   while(strow<endrow && stcol<endcol){
      for(int j=stcol; j<endcol; j++){
         cout<<matrix[strow][j]<<" ";
      }
      for(int j=strow+1; j<endrow; j++){
         cout<<matrix[j][endcol-1]<<" ";
      }
      for(int j=endcol-2; j>=stcol; j--){
         cout<<matrix[endrow-1][j]<<" ";
      }
      for(int j=endrow-2; j>strow; j--){
         cout<<matrix[j][stcol]<<" ";
      }
      strow++;
      endrow--;
      stcol++;
      endcol--;
   }
   return 0;
}