#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character: ";
    cin>>ch;

    if(ch>='0' && ch<='9'){
        cout<<"Character is numeric";
    }
    else if(ch>='a' && ch<='z'){
        cout<<"Character is Lower case";
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"Character is Upper case";
    }
    else{
        cout<<"Enter valid character";
    }
}