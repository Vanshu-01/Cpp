#include <iostream>
using namespace std;
int main(){
    int n,row=1;
    cin>>n;
    int val=1;
    while(row<=n){
        int space=1;
        while(space<=n-row){
            cout<<" ";
            space++;
        }
        int col=1;
        while(col<=row){
            cout<<val;
            val++;
            col++;
        }
        cout<<"\n";
        row++;
    }
}