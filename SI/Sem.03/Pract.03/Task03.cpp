// Task03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a number: ";
	int n;
	cin >> n;

	int res = 0;
	int square = n * n;
	while (square != 0)
	{
		int lastDigit = square % 10;
		square /= 10;

		res = res * 10 + lastDigit;
	}
	cout << res;
}
