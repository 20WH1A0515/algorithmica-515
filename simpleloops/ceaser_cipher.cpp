#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter a string:";
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a'||s[i]<='z')
        s[i]=s[i]+3;
        if(s[i]>'z')
        s[i]=s[i]-'z'+'a'-1;
    }
    cout<<s;
}