#include <iostream>
#include <math.h>
using namespace std;

int main() {

//Zadacha 9
//ax2 + bx + c = 0

	int a, b, c, discriminant, x1, x2;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	discriminant = b * b - 4 * a * c;
	x1 = (-b + sqrt(discriminant)) / (2 * a);
	x2 = (-b - sqrt(discriminant)) / (2 * a);

	cout << "x1 = " << x1 << ", " << "x2 = " << x2 << endl;
	
	return 0;
	}