#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=3){
            int ch = i+j-2+'A';
            cout<<char(ch);
            j++;
        }
        cout<<"\n";
        i++;
    }
}