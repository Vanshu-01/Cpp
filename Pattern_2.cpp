#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cin>>n;

    while(i<=n){
        int j = 1;
        while(j<=3){
            cout<<i;
            j++;
        }
        cout<<"\n";
        i++;
    }
}