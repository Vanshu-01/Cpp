#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cin>>n;
    
    while(i<=n){
        int j = 1;
        int ch = (int)'A';
        while(j<=3){
            cout<<char(ch);
            j++;
            ch++;
        }
        cout<<"\n";
        i++;
    }
}