#include <iostream>

void printBinary(unsigned number)
{
	if (number == 0) {
		std::cout << "0";
		return;
	}

	unsigned long long binary = 0;
	unsigned long long multiplier = 1;

	while (number > 0) {
		binary += (number % 2) * multiplier;
		multiplier *= 10;
		number /= 2;
	}

	std::cout << binary << std::endl;
}