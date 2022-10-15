// Task6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	cout << "Enter the coefficients of the quadratic equation: " << endl;
	cout << "a = ";
	cin >> a;
	cout << endl;
	cout << "b = ";
	cin >> b;
	cout << endl;
	cout << "c = ";
	cin >> c;
	cout << endl;

	double discriminant = sqrt(b * b - 4 * a * c);
	
	if (discriminant < 0)
	{
		cout << "The quadratic equation hasn't got a solution!" << endl;
		return 1;
	}

	if (discriminant == 0)
	{
		cout << "The quadratic equation has got one only solution: x = "<< (-b/2*a) << endl;
	}
	if(discriminant > 0)
	{
		double x1, x2;
		x1 = (-b + discriminant) / 2 * a;
		x2 = (-b - discriminant) / 2 * a;

		cout << "The first solution is: x1 =  " << x1 << " and the second one is: x2 =  " << x2 << endl;
	}
}

