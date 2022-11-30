#include <iostream>
using namespace std;

int main()
{
	int number, digits = 0;
	cin >> number;

	int temp = number; //copy of number
	while (temp != 0)
	{
		temp /= 10;
		digits++;
	}

	int newNumber = 0;
	if (digits > 2)
	{
		int Multiplier = 1;
		const int centralDigit = digits / 2 + 1;

		for (int i = 1; i <= digits; i++)
		{
			if(digits % 2 == 0 && i == centralDigit - 1)
			{
				number /= 10;
				continue;
			}

			if (i == centralDigit)
			{
				number /= 10;
				continue;
			}

			newNumber += number % 10 * Multiplier;
			Multiplier *= 10;
			number /= 10;
		}
	}

	cout << newNumber << ", ";
	cout << ++newNumber << endl;
}
