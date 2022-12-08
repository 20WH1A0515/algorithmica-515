#include<iostream>
using namespace std;
int main(){
    string mon;
    int day;
    cout<<"enter your month and day of birth:";
    cin>>mon>>day;
    if(mon=="december"){
        if(day>=22){
            cout<<"zodiac sign is capricon";
        }
        else{
            cout<<"zodiac sign is sagittarius";
        }
    }
    else if(mon=="january"){
        if(day<=19){
            cout<<"zodiac sign is capricon";
        }
        else{
            cout<<"zodiac sign is aquarius";
        }
    }
    else if(mon=="february"){
        if(day<=18){
            cout<<"zodiac sign is aquarius";
        }
        else{
            cout<<"zodiac sign is pisces";
        }
    }
    else if(mon=="march"){
        if(day<=20){
            cout<<"zodiac sign is pisces";
        }
        else{
            cout<<"zodiac sign is aries";
        }
    }
    else if(mon=="april"){
        if(day<=19){
            cout<<"zodiac sign is aries";
        }
        else{
            cout<<"zodiac sign is taurus";
        }
    }
    else if(mon=="may"){
        if(day<=20){
            cout<<"zodiac sign is taurus";
        }
        else{
            cout<<"zodiac sign is gemini";
        }
    }
    else if(mon=="june"){
        if(day<=20){
            cout<<"zodiac sign is gemini";
        }
        else{
            cout<<"zodiac sign is cancer";
        }
    }
    else if(mon=="july"){
        if(day<=22){
            cout<<"zodiac sign is cancer";
        }
        else{
            cout<<"zodiac sign is leo";
        }
    }
    else if(mon=="august"){
        if(day<=22){
            cout<<"zodiac sign is leo";
        }
        else{
            cout<<"zodiac sign is virgo";
        }
    }
    else if(mon=="september"){
        if(day<=22){
            cout<<"zodiac sign is virgo";
        }
        else{
            cout<<"zodiac sign is libra";
        }
    }
    else if(mon=="october"){
        if(day<=22){
            cout<<"zodiac sign is libra";
        }
        else{
            cout<<"zodiac sign is scorpio";
        }
    }
    else if(mon=="november"){
        if(day<=21){
            cout<<"zodiac sign is scorpio";
        }
        else{
            cout<<"zodiac sign is sagittarius";
        }
    }
    else{
        cout<<"entered inappropriate data.";
    }
}