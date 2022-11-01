#include <iostream>
bool IsPrime(int number);
int FindNearestPrime(int number);
void FindFactorization(int number);

int main()
{
	int number = 0;
	std::cin >> number;
	FindFactorization(number);

}
void FindFactorization(int number)
{
	while (FindNearestPrime(number) != -1)
	{
		int primeDelimiter = FindNearestPrime(number);
		std::cout << primeDelimiter << " ";
		number /= primeDelimiter;
	}
}

bool IsPrime(int number)
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

int FindNearestPrime(int number)
{
	for (int i = 2; i <= number; i++)
	{
		if (number % i == 0 && IsPrime(i))
		{
			return i;
		}
	}
	return -1;
}
