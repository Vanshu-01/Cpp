#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the number till which u want the sum: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"SUM = "<<sum;
}