// Task02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	// x + y = n
	int n;
	cout << "Enter a number: ";
	cin >> n;

	for (int i = 1; i < n; i++)
	{
		cout << "x = " << i << " y = " << n - i;
		cout << endl;
	}

}

