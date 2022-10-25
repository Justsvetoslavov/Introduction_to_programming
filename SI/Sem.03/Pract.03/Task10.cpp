#include <iostream>

int main() {
	int input = 0, numberOfDigits = 0;

	std::cin >> input;

	{
		int inputCopy = input;

		while (inputCopy != 0) {
			inputCopy /= 10;
			numberOfDigits++;
		}
	}

	{
		int firstHalf = 1, secondHalf = 1, numberOfDigitsPerHalf = 0, newNumber = 0;

		numberOfDigitsPerHalf = numberOfDigits / 2;
		if (numberOfDigits % 2 == 0) numberOfDigitsPerHalf--;

		for (int i = 0; i < numberOfDigits/ 2 + 1; i++) {
			firstHalf *= 10;
		}
		for (int i = 0; i < numberOfDigitsPerHalf; i++) {
			secondHalf *= 10;
		}

		firstHalf = input / firstHalf;
		secondHalf = input % secondHalf;

		for (int i = 0; i < numberOfDigitsPerHalf; i++) {
			firstHalf *= 10;
		}

		newNumber = firstHalf + secondHalf;

		std::cout << newNumber << ", " << newNumber + 1 << std::endl;
	}
	
	return 0;
}