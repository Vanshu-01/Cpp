#include <iostream>
using namespace std;
int main(){
    int n,isPrime=1;
    cout<<"Enter the number: ";
    cin>>n;
    if(n==0 || n==1){
        cout<<"Neither Prime Nor Composite";
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                isPrime=0;
                break;
            }
        }
    }

    if(isPrime==0){
        cout<<"Not a Prime Number";
    }
    else{
        cout<<"Prime Number";
    }
} 