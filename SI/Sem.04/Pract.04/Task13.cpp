#include <iostream>
bool IsPrimeNumber(int number);
void PrintAllPrimeNumbers(int number);
bool IsSumOfPrimeNumbers(int number);
int main()
{
	std::cout << (IsPrimeNumber(121) ? "yes" : "no")<<std::endl;
	PrintAllPrimeNumbers(110);
	std::cout << (IsSumOfPrimeNumbers(102) ? "yes" : "no");
}

bool IsPrimeNumber(int number)
{
	bool isPrime = true;
	if (number <= 1)
	{
		isPrime = false;
	}
	else
	{
		for (int i = 2; i <= sqrt(number); i++)
		{
			if (number % i == 0)
			{
				isPrime = false;
				break;
			}
		}
	}
	return isPrime;
}
void PrintAllPrimeNumbers(int number)
{
	for (int i = 2; i <=number ; i++)
	{
		if (IsPrimeNumber(i))
		{
			std::cout << i << std::endl;
		}
	}
}
bool IsSumOfPrimeNumbers(int number)
{
	bool isSumOfPrimes = false;
	for (int i = 2; i <= number/2; i++)
	{
		if (IsPrimeNumber(i) && IsPrimeNumber(number-i))
		{
			isSumOfPrimes = true;
			//td::cout << i << number - i << std::endl;
			break;
		}
	}
	return isSumOfPrimes;
}
