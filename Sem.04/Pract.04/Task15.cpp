#include <iostream>

const int LowerBound = 100;
const int UpperBound = 100000;

bool isValidInput(int number) {
	return number >= LowerBound && number <= UpperBound;
}

int getValidNumber() {
	int number;
	do {
		std::cout << "Enter a number in range [" << LowerBound << ", " << UpperBound << "]: ";
		std::cin >> number;
		if (!isValidInput(number)) {
			std::cout << "Invalid input. Try again.\n";
		}
	} while (!std::cin || !isValidInput(number));

	return number;
}

int findNearestPowerOfTwo(int number) {
	int powerOfTwo = 1;
	int lower = 1, higher = 2;
	
	while (powerOfTwo <= number) {
		lower = powerOfTwo;
		powerOfTwo *= 2;
		higher = powerOfTwo;
	}

	return ((higher - number) < (number - lower)) ? higher : lower;
}

int main() {
	int number = getValidNumber();
	int nearest = findNearestPowerOfTwo(number);
	std::cout << "Nearest power of 2: " << nearest << std::endl;
	return 0;
}