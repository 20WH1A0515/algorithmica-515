#include<iostream>
using namespace std;
int main(){
    string mon;
    int day;
    cout<<"enter the month and day:";
    cin>>mon>>day;
    if(mon=="january" || mon=="february"){
        cout<<"spring";
    }
    else if(mon=="april"||mon=="may"){
        cout<<"summer";
    }
    else if(mon=="july"||mon=="august"){
        cout<<"fall";
    }
    else if(mon=="october"||mon=="november"){
        cout<<"winter";
    }
    else if(mon=="december"){
        if(day>=21){
            cout<<"spring";
        }
        else{
            cout<<"winter";
        }
    }
    else if(mon=="march"){
        if(day<=20){
            cout<<"spring";
        }
        else{
            cout<<"summer";
        }
    }
    
    else if(mon=="september"){
        if(day>=22){
            cout<<"winter";
        }
        else{
            cout<<"fall";
        }
    }
    else if(mon=="june"){
        if(day<=21){
            cout<<"summer";
        }
        else{
            cout<<"fall";
        }
    }
}