#include <iostream>
using namespace std;
void DenominatorAndNumerator(int& num1, int& num2);
void Sum(int& num1, int& num2, int& num3, int& num4);

int main()
{
    int num1, num2, num3, num4;
	cin >> num1 >> num2 >> num3 >> num4;
	DenominatorAndNumerator(num1, num2);
	DenominatorAndNumerator(num3, num4);
	Sum(num1, num2, num3, num4);
}

void DenominatorAndNumerator(int& num1, int& num2)
{
	int helper = (num1 >= num2) ? num2 : num1;
	while (num1 > helper / 2 || num2 > helper / 2)
	{
		for (int i = 2; i <= helper / 2; i++)
		{
			if (num1 % i == 0 && num2 % i == 0)
			{
				num1 /= i;
				num2 /= i;
			}
		}
	}
}

void Sum(int& num1, int& num2, int& num3, int& num4)
{
	int numerator = num2;
	if (num2 != num4)
	{
		numerator = num2 * num4;
		num1 *= num4;
		num3 *= num2;
	}
	else
	{
		num1 *= num4;
		num3 *= num2;
	}
	cout << num1 + num3 << "\n---\n" << numerator << endl;
}