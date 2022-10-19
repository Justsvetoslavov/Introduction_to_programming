// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter a value for a:";
	cin >> a;
	cout << "Enter a value for b:";
	cin >> b;
	cout << "Enter a value for c:";
	cin >> c;
	double x1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
	double x2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
	cout << "x1=" << x1 << endl << "x2=" << x2;
	return 0;

}

