#include <iostream>

using namespace std;

int Pow(int x, int k)
{
	if (k == 0)
	{
		return 1;
	}
	int base = x;
	for (int i = 1; i < k; i++)
	{
		    x *= base;
	}
	return x;
}

int GetNumberInBinary(int n)
{
	int num = 0;
	int i = 0;
	while (n != 0)
	{
		num += (n % 2) * Pow(10, i);
		n /= 2;
		i++;
	}
	return num;
}

int GetNumOfOnes(int num)
{
	int sum = 0;
	while (num != 0)
	{
		if (num % 10 == 1) sum++;
		num /= 10;
	}
	return sum;
}

int main()
{
	int number;
	cin >> number;
	cout << GetNumOfOnes(GetNumberInBinary(number));
}