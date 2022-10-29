#include <iostream>
using namespace std;
bool isPrime(int num)
{
	int squreRoot = sqrt(num);
	if (num <= 1)
	{
		return false;
	}
	bool isPrime = true;
	for (int i = 2; i <= squreRoot; i++) 
	{
		if (num % i == 0)
		{
			isPrime = false;
			break;
		}
	}
	return isPrime;
}
void allPrimeNums(int num)
{
	for (int i = 1; i < num; i++)
	{
		if (isPrime(i))
		{
			cout<< i <<" ";
		}
	}
}

bool isSumOfTwoPrimeNums(int num)
{
	bool isSum = false;
	for (int i = 2; i < num; i++)
	{
		for (int j = 2; j < num; j++)
		{
			if (i !=j && isPrime(i) && isPrime(j) && i + j == num)
			{
					isSum = true;
			}
		}
	}
	return isSum;
}
int main()
{
	cout << "Enter a number: ";
	int num;
	cin >> num;
	cout << boolalpha << isPrime(num)<<endl;
	allPrimeNums(num);
	cout <<endl<< boolalpha << isSumOfTwoPrimeNums(num);
	return 0;
}