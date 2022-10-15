// Task5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int a, b, c; // Sides of a triangle
	cout << "Enter the three sides of your triangle: ";
	cin >> a >> b >> c;
	if ( (a < b + c) && (b < a + c) && (c < a + b) )
	{
		cout << "The triangle is valid" << endl;
	}
	else cout << "The triangle is invalid" << endl;
}

