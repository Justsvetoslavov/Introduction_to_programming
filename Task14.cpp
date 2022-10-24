#include <iostream>
using namespace std;
int main() {
    int a,b,c,d,e;
    cout<<"Please enter the coefficients: "<<endl;
    cin>>a>>b>>c>>d>>e;
    for(int i = -100; i <= 100; i++) {
        int power4 = i * i * i * i;
        int power3 = i * i * i;
        int power2 = i * i;
        int functionX = a * power4 + b * power3 + c * power2 + d * i + e; 
        if(functionX >= 0) cout<<i<<"  ";
    }
    cout<<endl;
}