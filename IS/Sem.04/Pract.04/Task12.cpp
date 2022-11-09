#include <iostream>

const int LowerBound = 100;
const int UpperBound = 1000000;

int CheckInput() {
	int number;
	do {
		std::cout << "Enter a valid number: ";
		std::cin >> number;
	} while (!std::cin || number < LowerBound || number > UpperBound);

	return number;
}

int FindTheNearest(int input) {
	int result = 64; // The nearest possible value
	int lower, higher;
	while (result <= input) {
		lower = result;
		result *= 2;
		higher = result;
	};

	result = ((higher - input) > (input - lower)) ? lower : higher;
	return result;
}