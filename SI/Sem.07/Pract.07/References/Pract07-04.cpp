#include <iostream>
using namespace std;

void SwapValuesIfHigher(int& n, int& m)
{
	if (n > m)
	{
		int copyN = n;
		n = m;
		m = copyN;
	}
}

int FindGCD(int lower, int higher)
{
	int gcd = 0;
	SwapValuesIfHigher(lower, higher);
	for (int i = 1; i <= higher; i++)
	{
		if (lower % i == 0 && higher % i == 0)
		{
			gcd = i;
		}
	}
	return gcd;
}

void Reduction(int& n, int& m)
{
	int firstGCD = FindGCD(n, m);
	n /= firstGCD;
	m /= firstGCD;
}

void SumOfFractions(int& a, int& b, int& c, int& d)
{
	int numerator = a * d + c * b;
	int denominator = b * d;
	Reduction(numerator, denominator);
	cout << numerator << ' ' << denominator << endl;
}

int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	cin >> a >> b >> c >> d;
	SumOfFractions(a, b, c, d);
}
