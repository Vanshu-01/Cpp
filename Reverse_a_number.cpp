#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int INT_MIN = - 2147483648;
    int INT_MAX = 2147483647;
    int ans = 0;

    while(n != 0){
        int rem = n%10;
        ans = (ans * 10) + rem;
        n=n/10;
    }
    if( ans < INT_MIN/10 || ans > INT_MAX/10){
        cout << "0" ;
    }
    else{
        cout<<ans;
    }

}