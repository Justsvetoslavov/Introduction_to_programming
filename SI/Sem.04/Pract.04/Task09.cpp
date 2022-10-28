// Task09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int calculate(int a, int b, char action = '+')
{
	switch (action)
	{
		case '+':
			return a + b;
			break;
		case '-':
			return a - b;
			break;
		case '*':
			return a * b;
			break;
		case '/':
			if (b == 0)
			{
				cout << "The devisor can not be zero! Please input other number!";
				cin >> b;
			}
			return a / b;
			break;
		case '%':
			if (b == 0)
			{
				cout << "The devisor can not be zero! Please input other number!";
				cin >> b;
			}
			return a % b;
			break;
		default:
			break;
	}
}

int main()
{
	cout << calculate(20, 5,'/');
}
