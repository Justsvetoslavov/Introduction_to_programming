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

void Reduction(int& n, int& m, int& a, int& b)
{
	int firstGCD = FindGCD(n, m);
	int secondGCD = FindGCD(a, b);
	n /= firstGCD;
	m /= firstGCD;
	a /= secondGCD;
	b /= secondGCD;
}

void SumOfFractions(int& a, int& b, int& c, int& d)
{
	Reduction(a, b, c, d);
	int gcd = FindGCD(b, d);
	b *= (d / gcd);
	a *= (d / gcd);
	d *= (b / gcd);
	c *= (b / gcd);
	int sum = a + c;
	cout << sum << " " << d;
}

int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	cin >> a >> b >> c >> d;
	SumOfFractions(a, b, c, d);
}
