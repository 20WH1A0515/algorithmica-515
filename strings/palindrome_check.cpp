#include<iostream>
using namespace std;
bool isPalindrome(string s){
    for(int i=0;i<s.length();i++){
        for(int j=s.length()-1;j>=0;j--){
            if(s[i]==s[j]){
                return true;
            }
            else{
                return false;
            }
        }
    }
}
int main(){
    string s;
    cout<<"enter a string:";
    cin>>s;
    if(isPalindrome(s)){
        cout<<"the entered string is palindrome.";
    }
    else{
        cout<<"the entered string is not palindrome.";
    }
}