#include <iostream>
#include <math.h>
using namespace std;

int main() {

//Zadacha 8

int radius;
cout << "Radius: ";
cin >> radius;
double length = 2 * 3.14 * radius;
double area = 3.14 * radius * radius;

cout << "Length: " << length << endl;
cout << "Area: " << area << endl;

return 0;
}