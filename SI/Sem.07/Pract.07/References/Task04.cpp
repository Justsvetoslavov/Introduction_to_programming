#include <iostream>
//Да се напише фунция, която приема 2 числа - числител и знаменател на обикновена дроб, и съкращава дробта.
//Напишете програма, която извежда сбора на 2 такива дробни числа.
//
//Вход: 16 20 18 9 | Изход : 14 5 // 4/5 + 2/1 = 14/5


void newRealNumberOfCollectables(int& numerator, int& denominator)
{
	if (numerator > denominator)
	{
		for (int i = 2; i <= denominator; i++)
		{
			if ((numerator % i == 0 && denominator % i == 0))
			{
				numerator /= i;
				denominator /= i;
				i--;
			}
		}
	}

	else {
		for (int i = 2; i <= numerator; i++)
		{
			if ((numerator % i == 0 && denominator % i == 0))
			{
				numerator /= i;
				denominator /= i;
				i--;//да пробва още веднъж със същото число
			}
		}
	}
}

void sumOfTheNewRealNumbers(int& numerator1, int& denominator1, int& numerator2, int& denominator2)
{
	newRealNumberOfCollectables(numerator1, denominator1);
	newRealNumberOfCollectables(numerator2, denominator2);
	int sumOfNewNumenator = 0;
	int newDenominator = denominator1 * denominator2;
	if (denominator1 == newDenominator)
	{
		sumOfNewNumenator = numerator1 + numerator2 * denominator1;
	}
	else if (denominator2 == newDenominator)
	{
		sumOfNewNumenator = numerator2 + numerator1 * denominator2;
	}
	else
	{
		sumOfNewNumenator = numerator1 * denominator2 + numerator2 * denominator1;
	}

	newRealNumberOfCollectables(sumOfNewNumenator, newDenominator);
	std::cout << sumOfNewNumenator << "/" << newDenominator;
}
int main()
{
	int numerator1, denominator1,numerator2,denominator2;
	std::cin >> numerator1 >> denominator1 >> numerator2 >> denominator2;
	sumOfTheNewRealNumbers(numerator1, denominator1, numerator2, denominator2);
}