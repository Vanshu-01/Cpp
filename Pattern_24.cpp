#include <iostream>
using namespace std;
int main(){
    int n,row=1;
    cin>>n;
    while(row<=n){
        int space=1;
        while(space<=n-row){
            cout<<" ";
            space++;
        }
        int col1=1;
        while(col1<=row){
            cout<<col1;
            col1++;
        }
        int val=row-1;
        int col2=1;
        while(col2<=row-1){
            cout<<val;
            val--;
            col2++;
        }
        cout<<"\n";
        row++;
    }
}