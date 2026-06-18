#include<iostream>
#include <climits> 
#include <algorithm>
using namespace std;

int main() {
    int num;
    cout <<"enter an integer: ";
    cin>>num;
    bool isprime=true;
    for(int i=2; i<num; i++){
        if(num%i==0){
            isprime=false;
            break;
        }else{
            continue;
        }
    }
    if(isprime==true){
        cout<<"prime";
    }else{
        cout<<"not prime";
    } 
    if(num==2){
        cout<<"prime";
    }
}