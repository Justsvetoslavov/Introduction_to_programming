#include <iostream>

using namespace std;

bool IsEven(int num)
{
	if (num % 2 == 0)
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
	cout << boolalpha << IsEven(number);
}