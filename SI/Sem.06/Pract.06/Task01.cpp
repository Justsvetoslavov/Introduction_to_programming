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
int ConvertIntoDec(int n, int s)
{
	int num = 0;
	int i = 0;
	while (n != 0)
	{
		num += (n % 10) * Pow(s, i);
		n /= 10;
		i++;
	}
	return num;
}

int GetNumber(int n, int s)
{
	int num = 0;
	int i = 0;
	while (n != 0)
	{
		num += (n % s) * Pow(10, i);
		n /= s;
		i++;
	}
	return num;
}


int main()
{
	int number, s1, s2;
	cin >> number >> s1 >> s2;
	cout << GetNumber(ConvertIntoDec(number, s1), s2);
}