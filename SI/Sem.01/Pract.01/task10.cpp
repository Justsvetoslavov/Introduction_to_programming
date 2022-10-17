#include <iostream>
using namespace std;
int main() {
    int a, b, swap;
cout << "Please enter the value of the first number" << endl;
cin >> a;
cout << "Please enter the value of the second number" << endl;
cin >> b;
swap = a;
a = b;
b = swap;
cout<<"Swapped: "<< a << " " << b<<endl;
}