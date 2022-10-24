#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b;
    cout<<"Please enter the two ends of the interval: "<<endl;
    cin>>a>>b;
    if(a < 0 || b < 0 || a >= b) cout<<"Invalid input!"<<endl;
    else {
        for(int i = a; i <= b; i++) {
            bool isPrime = true;
            for(int j = 2; j <= sqrt(i); j++) {
                if(i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if(isPrime)cout<<i<<" ";
        }
        cout<<endl;
    }   
}