#include<bits/stdc++.h>
using namespace std;
int gethypotenuse(int a, int b){
    return sqrt((a*a)+(b*b));
}
int main(){
    int a,b;
    cout<<"enter the values of a and b:";
    cin>>a>>b;
    cout<<gethypotenuse(a,b);
}