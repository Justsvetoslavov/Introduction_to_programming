#include <iostream>

int main() {
	int input = 0, numberOfDigits = 0, numberOfZeroes = 1, newNumber = 0, firstMiddleDigit = 0, secondMiddleDigit = 0;

	std::cin >> input;

	int inputCopy = input;

	while (inputCopy != 0) {
		numberOfDigits++;
		numberOfZeroes *= 10;
		inputCopy /= 10;
	}

	numberOfZeroes /= 10;
	firstMiddleDigit = (numberOfDigits - 1) / 2;
	secondMiddleDigit = numberOfDigits / 2;

	for (int i = 0; i < numberOfDigits; i++) {
		if (i != firstMiddleDigit && i != secondMiddleDigit) {
			newNumber *= 10;
			newNumber += (input / numberOfZeroes);
		}

		input %= numberOfZeroes;
		numberOfZeroes /= 10;
	}

	std::cout << newNumber << ", " << newNumber + 1;

	return 0;
}