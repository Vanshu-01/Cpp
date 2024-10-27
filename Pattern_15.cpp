#include <iostream>
using namespace std;
int main(){
    int n,i=1;
    cin>>n;
    int ch = (int)'A';
    
    while(i<=n){
        int j=1;
        
        while(j<=i){
            cout<<char(ch);
            ch++;
            j++;
        }
        cout<<"\n";
        i++;
    }
}