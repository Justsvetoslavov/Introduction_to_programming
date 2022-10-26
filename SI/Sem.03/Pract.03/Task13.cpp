#include <iostream>

int main() {
	int n = 0;

	std::cin >> n;
	
	if (n > 0) {
		while (n != 0) {
			int biggestPowerOfTwoLessThanN = 0, powerOfTwo = 1;

			while (powerOfTwo * 2 <= n) {
				powerOfTwo *= 2;
				biggestPowerOfTwoLessThanN++;
			}

			std::cout << "2^" << biggestPowerOfTwoLessThanN;
			if (n - powerOfTwo > 0) std::cout << " + ";

			n -= powerOfTwo;
		}
	} else {
		std::cout << "Incorrect input" << std::endl;
	}

	return 0;
}