#include<iostream>
using namespace std;
int main(){
    string s;
    int n;
    cout<<"enter the position:";
    cin>>s>>n;
    if((s=="a"||s=="c"||s=="e"||s=="g") && (n==2 || n==4 || n==6 || n==8)){
        cout<<"square is white";
    }
    else if((s=="b"||s=="d"||s=="f"||s=="h")&&(n==1||n==3||n==5||n==7)){
        cout<<"square is white";
    }
    else if((s=="a"||s=="c"||s=="e"||s=="g") && (n==1 || n==3 || n==5 || n==7)){
        cout<<"square is black";
    }
    else if((s=="b"||s=="d"||s=="f"||s=="h") && (n==2 || n==4 || n==6 || n==8)){
        cout<<"square is black";
    } 
    else{
        cout<<"input is invalid";
    }
    return 0;
}