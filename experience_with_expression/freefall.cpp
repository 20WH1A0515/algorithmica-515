#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    float vi=0,vf,a=9.8,d;
    cout<<"enter the distance: ";
    cin>>d;
    vf=sqrt((vi*vi)+2*a*d);
    cout<<"the final speed is :"<<vf;
    return 0;
}