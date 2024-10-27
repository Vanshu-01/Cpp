#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cin>>n;

    while(i<=n){
        int j = 1;
        while(j<=4){
            cout<<j;
            j++;
        }
        cout<<"\n";
        i++;
    }
}