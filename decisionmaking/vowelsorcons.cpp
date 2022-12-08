#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter a letter:";
    cin>>s;
    if(s =="a"||s =="e"||s == "i"||s=="o"||s=="u"){
        cout<<"letter is a vowel.";
    }
    else if (s=="y"){
        cout<<"letter is sometimes vowel and sometimes consonant";
    }
    else{
        cout<<"letter is consonant";
    }
    return 0;
}