#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout<<"Number 1:";
    cin>>a;
    cout<<"Number 2:";
    cin>>b;
    bool aBiggerThanB = a > b;
    cout<<"Maximum value: "<< a * aBiggerThanB + b * !aBiggerThanB << endl;
    cout<<"Minimum value: "<< a * !aBiggerThanB + b * aBiggerThanB << endl;
}