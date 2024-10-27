#include <iostream>
using namespace std;
int main(){
    int n,row=1;
    cin>>n;

    while(row<=n){
        int col1=1;
        while(col1<=n-row+1){
            cout<<col1;
            col1++;
        }
        int col2=1;
        while(col2<=row-1){
            cout<<"*";
            col2++;
        }
        int col3=1;
        while(col3<=row-1){
            cout<<"*";
            col3++;
        }
        int val=n-row+1;
        
        while(val>=1){
            cout<<val;
            
            val--;
        }
        cout<<"\n";
        row++;
    }
}