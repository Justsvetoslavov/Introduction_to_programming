#include <iostream>
using namespace std;
int main() {
    cout<<"Please enter a 4-digit number"<<endl;
    int num;
    cin>>num;
    if(num < 1000 || num > 9999) cout<<"This number isn't a 4-digit one!";
    else {
        int h = num / 1000;
        int s = (num / 100) % 10;
        int d = (num / 10) % 10;
        int e = num % 10;
        int left = h * 10 + e;
        int right = s * 10 + d;
        if(left > right) cout<<"greater"<<endl;
        else if(left == right) cout<<"equal"<<endl;
        else cout<<"less"<<endl;
    }
}