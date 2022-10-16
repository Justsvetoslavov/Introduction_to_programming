#include <iostream>
using namespace std;
#include <math.h>

int main() {

	//a * x^2 + b * x + c = 0, a,b,c - коефициенти
	int a, b, c, discriminant, x1, x2;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;

	discriminant = (b * b) - (4 * a * c);

	if ((discriminant >= 0) && (a != 0)) {
		x1 = (-b + sqrt(discriminant)) / 2 * a;
		x2 = (-b - sqrt(discriminant)) / 2 * a;
		cout << "The solutions are: " << x1 << ", " << x2 << endl;
	}
	else {

		cout << "That equasion has 0 real solutions. ";
	}

	return 0;
	
}