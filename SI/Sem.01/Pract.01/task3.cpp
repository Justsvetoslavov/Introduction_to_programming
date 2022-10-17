#include <iostream>
using namespace std;
int main() {
double money;
cout<<"Enter the amount of money in leva: "<<endl;
cin >> money;
double euros = money * 0.511292;
double dollars = money * 0.50247;
cout << money << " BGN is " << euros << " EUR or " << dollars << " USD.";
}