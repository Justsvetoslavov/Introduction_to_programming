#include <iostream>
int FindSumOfDigits(long long number);
int main()
{
	long long number = 0;
	std::cin >> number;
	while (number / 10 != 0)
	{
		number = FindSumOfDigits(number);
	}
	std::cout << number;
}
int FindSumOfDigits(long long number)
{
	int sum = 0;
	while (number>0)
	{
		sum += number % 10;
		number /= 10;
	}
	return sum;
}
