#include <iostream>
using namespace std;

int main()
{
	int number, left; 
	cout << "Enter a positive number: ";
	cin >> number;
	number *= number;
	while (number % 2 == 0)
	{
		number /= 10;
	}
	while (number > 0)
	{
		left = number % 10;
		cout << left;
		number /= 10;
	}
}