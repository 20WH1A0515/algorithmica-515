#include<iostream>
using namespace std;
int main(){
    int wavel;
    cout<<"enter a wavelength:";
    cin>>wavel;
    if(wavel>=380 && wavel<450){
        cout<<"violet";
    }
    else if(wavel>=450 && wavel<495){
        cout<<"blue";
    }
    else if(wavel>=495 && wavel<570){
        cout<<"green";
    }
    else if(wavel>=570 && wavel<590){
        cout<<"yellow";
    }
    else if(wavel>=590 && wavel<620){
        cout<<"orange";
    }
    else if(wavel>=620 && wavel<=750){
        cout<<"red";
    }
    else{
        cout<<"the wavelength is inappropriate";
    }
}