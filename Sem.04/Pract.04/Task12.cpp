#include <iostream>

bool isNumberInInterval(int num, int lowerBound, int upperBound)
{
	return lowerBound <= num && num <= upperBound;
}

int askUser(int from, int to)
{
	int number;
	std::cout << "Enter a number in range [" << from << ", " << to << "]: ";
	while (std::cin >> number)
	{
		if (isNumberInInterval(number, from, to)) {
			return number;
		}
		std::cout << "Invalid input. Try again: ";
	}
	return from;
}