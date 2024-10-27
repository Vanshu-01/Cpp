#include <iostream>
using namespace std;
int main(){
    int n,prod=1,sum=0;
    cout<<"Enter an integer: ";
    cin>>n;

    while(n!=0){
        int remainder = n%10;
        sum+=remainder;
        prod*=remainder;
        n=n/10;
    }
    cout<<"PRODUCT = "<<prod<<"  SUM = "<<sum<<"\n";
    cout<<"PRODUCT - SUM = "<<prod - sum;

}