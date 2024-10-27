#include<iostream>
using namespace std;
int main(){
    int n,f=1,c;
    cout<<"Enter the temperature in farenheit till which table is to be printed: ";
    cin>>n;
    cout<<"  FARENHEIT  |  CELCIUS  \n";
    cout<<"-------------|-----------\n\n";

    while(f<=n){
        c = (f - 32)*(9/5);
        cout<<"     "<<f<<"      |     "<<c<<"     \n";
        f++;
    }
}