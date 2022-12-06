#include <iostream>

void SubstractOne(int& n)
{
	int m = 1;
	while (!(n & m)) {
		n ^= m;
		m <<= 1;
	}

	n ^= m;
}

void SubstractOne(unsigned long long& n) //function overload to avoid casting\
					 //needed for exact pow of 2 edge case
{
	int m = 1;
	while (!(n & m)) {
		n ^= m;
		m <<= 1;
	}

	n ^= m;
}

bool IsExactPowOfTwo(unsigned long long n)  //needed for exact pow of 2 edge case
{
	unsigned long long temp = n;
	SubstractOne(n);
	return (temp & n) == 0;
}

void SumOfPowTwoNumber(unsigned long long n)
{
	if (IsExactPowOfTwo(n)) { //cover edge case for exact pow of 2
				  //NOTE: Unoptimized example for this edge case
				  //      will NOT be included in the grading!
		bool isFirst = true;
		for (int i = 39; i >= 0; SubstractOne(i)) {
			if (n & (unsigned long long(1) << i)) {
				if (isFirst) { //skip first
					isFirst = false;
					n >>= 1;
					continue;
				}
				std::cout << i << " " << i;
				break;
			}
		}
	} else {
		for (int i = 40; i >= 0; SubstractOne(i)) {
			if (n & (unsigned long long(1) << i)) {
				std::cout << i << " ";
			}
		}
	}
}
