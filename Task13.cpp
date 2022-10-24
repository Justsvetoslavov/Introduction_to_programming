#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Please enter your number: "<<endl;
    cin>>num;
    if(num <= 0) cout<<"Invalid input! "<<endl;
    else {
        int numCopy = num, powerOfTwo = 0;
        while(num > 0) {
            int remainder = num % 2;
            if(remainder == 1) cout<<"2^"<<powerOfTwo;
            powerOfTwo++;
            num /= 2;
            if(num > 0 && remainder == 1) cout<<" + ";
        }
        cout<<endl;
    }
}