#include <iostream>
using namespace std;
int main() {
    double aSide, bSide;
cout << "Please enter the first side: " << endl;
cin >> aSide;
cout << "Please enter the second side: " << endl;
cin >> bSide;
if(aSide <= 0 || bSide <= 0) cout<<"This is not a valid input"<<endl;
else{
double perimeter = 2 * (aSide + bSide);
double surface = aSide * bSide;

cout << "The perimeter of the rectangle is " << perimeter << " and its surface is " << surface << endl;
}
}