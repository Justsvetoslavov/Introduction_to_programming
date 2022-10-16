#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout<<"Enter the three sides of the triangle:"<<endl;
    cin>>a>>b>>c;
    if(a <= 0 || b <= 0 || c <= 0) cout<<"The input is invalid!"<<endl;
    else {
        if((a + b) > c && (a + c) > b && (b + c) > a) cout<<"This is a vaild triangle"<<endl;
        else cout<<"This is not a vaild triangle"<<endl;
    }
}