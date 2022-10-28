// Task07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int askUser(int from, int to)
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	while (!(number >= from && number <= to))
	{
		cout << "Enter a new number: ";
		cin >> number;
	}
	return number;
}

int main()
{
	cout << "The number is: " << askUser(10, 30) << endl;
}
