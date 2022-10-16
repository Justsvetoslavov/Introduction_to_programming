#include <iostream>
using namespace std;
int main() {
    int percentage;
    cout<<"Please enter the score: "<<endl;
    cin>>percentage;
    if(percentage > 100 || percentage < 0) cout<<"This is an invalid input";
    else {
        if(percentage < 40) cout<<2;
        else if(percentage < 60) cout<<3;
        else if(percentage < 70) cout<<4;
        else if(percentage < 80) cout<<5;
        else if(percentage < 90) cout<<6;
        else cout<<"6+";
    }
}