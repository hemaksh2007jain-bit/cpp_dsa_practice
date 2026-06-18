#include<iostream>
#include <climits> 
#include <algorithm>
using namespace std;

int main() {
    int array[]={4,2,0,6,3,2,5};
    int n=sizeof(array)/sizeof(int);
    int right[n];
    int left[n];
    right[0]=0;
    left[n-1]=0;
    int sum=0;
    for(int i=0;i<n; i++){
        if(right[i]<array[i]){
            right[1+i]=array[i];
        }else{
            right[i+1]=right[i];
        }
    }

    for(int j=n-1; j>=0; j--){
        if(left[j]<array[j]){
            left[j-1]=array[j];
        }
        else{
            left[j-1]=left[j];
        }
    }
    for(int i=0; i<n; i++){
        int water=min(left[i],right[i])-array[i];
        if(water>0){
            sum=sum+water;
        }
    }
    cout<<sum<<endl;
}