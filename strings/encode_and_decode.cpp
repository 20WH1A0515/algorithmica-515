#include<iostream>
using namespace std;
int decode(char a){
    return a;
}
char encode(int n){
    return n;
}
int main(){
    int n;
    char a;
    cout<<"enter the character:";
    cin>>a;
    cout<<decode(a)<<"\n";
    cout<<"enter an integer:";
    cin>>n;
    cout<<encode(n)<<"\n";
}