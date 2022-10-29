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
void factorization(int num)
{
	if (isPrime(num))
	{
		cout << "The number is prime and can't be factorise!";
		return;
	}
	for (int i = 2; i <= num; i++)
	{
			if (isPrime(i) && num % i == 0)
			{
				cout << i;
				if (i != num)
				{
					cout << ".";
				}
				num /= i;
				i--;
			}	
	}
}
int main()
{   
	cout << "Enter a number: ";
	int number;
	cin >> number;
	factorization(number);
    return 0;
}