#include <iostream>

using namespace std;

bool IsPositive(int num)
{
	if (num > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool IsNegative(int num)
{
	if (num < 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int number;
	cin >> number;
	cout << "The number is positive: "
		<< boolalpha << IsPositive(number) << endl
		<< "The number is negative: "
		<< boolalpha << IsNegative(number);
}