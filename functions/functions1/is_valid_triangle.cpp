#include<bits/stdc++.h>
using namespace std;
int isValidTriangle(int a,int b,int c){
    if((c>=a+b)||(a>=b+c)||(b>=a+c)){
        return false;
    }
    else{
        if((a<=0)||(b<=0)||(c<=0)){
            return false;
        }
        else{
            return true;
    }
    }
}
int main(){
    int a,b,c;
    cout<<"enter the lengths of a,b and c:";
    cin>>a>>b>>c;
    cout<<isValidTriangle(a,b,c);
}