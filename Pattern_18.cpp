#include <iostream>
using namespace std;
int main(){
    int n,row=1;
    cin>>n;
    while(row<=n){
        int space = 1;
        while(space<=n-row){
            cout<<" ";
            space++;
        }
        int col = 1;
        while(col<=row){
            cout<<"*";
            col++;
        }
        cout<<"\n";
        row++;
    }
}
