// Task10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	double a, b;
	char operation;
	cout << "Enter the first number: ";
	cin >> a;
	cout << endl;

	cout << "Choose possible operation from (+, -, *, /): ";
	cin >> operation;
	cout << endl;

	cout << "Enter the second number: ";
	cin >> b;
	cout << endl;

	double res = 0;
	switch (operation)
	{
		case '+':
			res = a + b;
			break;
		case '-':
			res = a - b;
			break;
		case '*':
			res = a * b;
			break;
		case '/':
			if (b == 0)
			{
				cout << "The divisor cannot be 0" << endl;
				break;
			}
			else
			{
				res = a / b;
				break;
			}
		default:
			cout << "Invalid operation" << endl;
			break;
	}
	if (res != 0) cout << "Result: " << res << endl;
}

