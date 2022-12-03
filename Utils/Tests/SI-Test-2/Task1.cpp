#include <iostream>

void SubstractOne(int& n)
{
	int m = 1;
	while (!(n & m) {
		n ^= m;
		m <<= 1;
	}

	n ^= m;
}

void SumOfPowTwoNumber(long long n)
{
	for (int i = 40; i >= 0; SubstractOne(i)) {
		if (n & (long long(1) << i)) {
			std::cout << i << " ";
		}
	}
}