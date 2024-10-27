#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;

    if(a==0){
        cout<<"Number is zero";
    }
    else if(a>0){
        cout<<"Number is positive";
    }
    else{
        cout<<"Number is negative";
        
    }
}