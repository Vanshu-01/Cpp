#include<iostream>
using namespace std;
int main(){
    int n,i=2;
    cout<<"Enter the number: ";
    cin>>n;
    if(n==0 || n==1){
        cout<<"Neither Prime Nor Composite";
    }
    else{
        while(n>1){
            if(n%i==0){
                cout<<"Not Prime";
                break;
            }
        }       
    }
}