#include <iostream>
#include <math.h>
using namespace std;

int main() {

// Zadacha 4

cout << "Please enter the length of the first side:" << endl;
double aSide;
cin >> aSide;
cout << "Please endter the length of the other side:" << endl;
double bSide;
cin >> bSide;
double P = 2 * (aSide + bSide);
double S = aSide * bSide;
cout << P << endl;
cout << S << endl;

return 0; 
}