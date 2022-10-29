#include <iostream>
using namespace std;
int sumOfDigits(long long num)
{
	int digits = 0;
	int numCopy = num;
	int sum = 0;
	while (numCopy != 0)
	{
		numCopy /= 10;
		digits++;
	}
	for (int i = 1; i <= digits; i++)
	{
		sum += num % 10;
		num /= 10;
	}
	return sum;
}
int nextSumOfDigits(long long num)
{
	int sum = sumOfDigits(num);
	while (sum > 9)
	{
		sum = sumOfDigits(sum);
	}
	return sum;
}
int main()
{
	cout << "Enter a number:";
	long long num;
	cin >> num;
	cout << nextSumOfDigits(num);
	return 0;
}