#include <iostream>
using namespace std;
int main() {
    int dividend, divisor;
cout << "Please enter the dividend: " << endl;
cin >> dividend;
cout << "Please enter the divisor: " << endl;
cin >> divisor;
if(divisor == 0) cout<<"This will commit an impossible operation"<<endl;
else {
    int quotient = dividend / divisor;
    int remainder = dividend % divisor;
    cout << "Dividing " << dividend << " with " << divisor << ": " << "quotient is " << quotient << " and the remainder is " << remainder << endl;
    }
}