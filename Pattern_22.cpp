#include <iostream>
using namespace std;
int main(){
    int n,row=1;
    cin>>n;
    while(row<=n){
        int space=1;
        while(space<=row-1){
            cout<<" ";
            space++;
        }
        int val=row;
        int col=1;
        while(col<=n-row+1){
            cout<<val;
            val++;
            col++;
        }
        cout<<"\n";
        row++;
    }
}
