#include <iostream>
using namespace std;
int main() {
    cout<<"Enter the credit card number: ";
    long cardNumber;
    cin>>cardNumber;
    cout<<"XXXXXXXXXXXX"<<(cardNumber % 10000);
}