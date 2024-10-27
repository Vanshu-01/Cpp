#include <iostream>
using namespace std;
int main(){
    int n,t1=0,t2=1,nextterm;
    cout<<"Enter the number of digits: ";
    cin>>n;
    cout<<"\n"<<"FIBONACCI SERIES : "<<"\n\n";
    cout<<"0"<<" "<<"1"<<" ";

    for(int i=1;i<=n;i++){
        nextterm = t1+t2;
        t1=t2;
        t2=nextterm;
        cout<<nextterm<<" ";
        }
    cout<<"\n\n";
}    
