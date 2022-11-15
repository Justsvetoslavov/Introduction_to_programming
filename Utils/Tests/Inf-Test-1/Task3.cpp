#include <iostream>

unsigned Reverse(unsigned n)
{
	unsigned reversed = 0;
    short lastDigit;
	while (n != 0) {
		lastDigit = n % 10;
		(reversed *= 10) += lastDigit;
		n /= 10;
	}

	return reversed;
}

bool IsPalindrome(unsigned n)
{
	return n == Reverse(n);
}

int main()
{
	unsigned n;
	std::cin >> n;

	for (size_t i = 10, currentSuffix = 0; n != currentSuffix; i *= 10) {
		currentSuffix = n % i;
		if (IsPalindrome(currentSuffix)) {
			std::cout << currentSuffix << std::endl;
		}
	}
}