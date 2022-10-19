#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;
	while (number / 10 > 0)
	{
		cout << 'X';
		number -= 10;
	}
	while (number / 5 > 0)
	{
		cout << 'V';
		number -= 5;
	}
	while (number/1 > 0)
	{
		cout << 'I';
		number -= 1;
	}
}