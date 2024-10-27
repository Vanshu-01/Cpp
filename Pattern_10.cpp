#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cin>>n;
    int ch = (int)'A';
    while(i<=n){
        int j = 1;
        while(j<=3){
            cout<<char(ch);
            j++;
        }
        cout<<"\n";
        i++;
        ch++;
    }
}