#include <iostream>
using namespace std;

bool isPositive(int num)
{
	bool isPositive;
	if (num >= 0)
	{
		isPositive = true;
	}
	else
	{
		isPositive = false;
	}
	return isPositive;
}

bool isNegative(int num)
{
	bool isNegative;
	if (num < 0)
	{
		isNegative = true;
	}
	else
	{
		isNegative = false;
	}
	return isNegative;
}

int main()
{
	int input = 0;
	cin >> input;
	cout << "This number is positive is a " << boolalpha << isPositive(input) << " statement" << endl;
	cout << "This number is negative is a " << boolalpha << isNegative(input) << " statement" << endl;
}