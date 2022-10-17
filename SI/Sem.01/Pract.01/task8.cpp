#include <iostream>
using namespace std;
int main() {
int radius;
cout << "Please enter the length of the radius: " << endl;
cin >> radius;
if(radius <= 0) cout<<"This is not a vaild input! "<<endl;
else{
double surface = radius * radius * 3.14159265;
double perimeter = 2 * 3.14159265 * radius;
cout << "The surface is " << surface << " and the perimeter - " << perimeter << endl;
}
}