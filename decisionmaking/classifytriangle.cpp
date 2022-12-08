#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter three sides of the triangle:";
    cin>>a>>b>>c;
    if(a==b && b==c && c==a){
        cout<<"triangle is equilateral";
    }
    else if(a==b|| b==c || c==a){
        cout<<"triangle is isosceles";
    }
    else{
        cout<<"triangle is scalene";
    }
    return 0;
}