#include <iostream>

using namespace std;

const double PI = 3.14159265;

int main()
{
	double radius;
	
	cout << "Radius: ";
	cin >> radius;

	cout << "Perimeter: " << 2 * radius * PI << endl;
	cout << "Area: " << radius * PI * PI << endl;

    return 0;
}