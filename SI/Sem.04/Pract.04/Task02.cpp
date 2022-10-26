#include <iostream>
using namespace std;

bool isEven(int num)
{
	bool isEven;
	if (num % 2 == 0)
	{
		isEven = true;
	}
	else
	{
		isEven = false;
	}
	return isEven;
}

int main()
{
	int input;
	cin >> input;
	cout << boolalpha << isEven(input);
}