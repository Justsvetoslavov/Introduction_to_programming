#include <iostream>
using namespace std;
int main() {
    int a, b;
    char op;
    cout<<"Please enter 2 numbers:"<<endl;
    cin>>a>>b;
    cout<<"Please choose an operation to commit: (+, *, -, /)";
    cin>>op;
    switch(op) {
        case '+': cout<<"The result is "<<(a+b)<<endl; break;
        case '*': cout<<"The result is "<<(a * b)<<endl; break;
        case '-': cout<<"The result is "<< (a - b)<<endl; break;
        case '/': if(b == 0) {cout<<"Impossible operation"; break;} else {cout<<"The result is "<< (a/b)<<endl; break; } 
        default: cout<<"Unsupportted operation."<<endl; break;
    }
}