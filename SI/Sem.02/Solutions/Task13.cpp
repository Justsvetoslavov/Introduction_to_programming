#include <iostream>
using namespace std;

int main()
{
	int number, A, B, C, D, num1, num2;
	cin >> number;
	if (number < 1000 || number > 9999)
	{
		cout << "The number should be between 1000 and 9999";
	}
	else
	{
		A = number / 1000;
		B = (number / 100) % 10;
		C = (number / 10) % 10;
		D = number % 10;
		num1 = A * 10 + D;
		num2 = B * 10 + C;
		if (num1 > num2)
		{
			cout << "greater (" << num1 << ">" << num2 << ")";
		}
		else if (num2 > num1)
		{
			cout << "less (" << num1 << "<" << num2 << ")";
		}
		else
		{
			cout << "equal (" << num1 << "=" << num2 << ")";
		}
	}
}