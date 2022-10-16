#include <iostream>
using namespace std;
int main() {
    char a;
    cout<<"Please enter a letter: "<<endl;
    cin>>a;
    if((a >= 65 && a <= 90) || (a >= 97 && a <= 122)) {
        if(a >= 65 && a <= 90) a += 32;
        else a -= 32;
        cout<<"The opposite letter is "<<a<<endl;
    } else cout<<"This is not a valid character"<<endl;
}