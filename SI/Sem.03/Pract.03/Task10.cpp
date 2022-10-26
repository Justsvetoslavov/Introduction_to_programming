#include <iostream>

using namespace std;

int main() {
	int input;
	cin >> input;

	int numberOfDigits = 0;
	int inputCopy = input;

	while (inputCopy != 0) {
		inputCopy /= 10;
		numberOfDigits++;
	}

	int numberOfDigitsPerHalf = numberOfDigits / 2;
	if (numberOfDigits % 2 == 0) {
		numberOfDigitsPerHalf--;
	}

	int firstHalf = 1, secondHalf = 1;
	for (int i = 0; i < numberOfDigits / 2 + 1; i++) {
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

	int newNumber = firstHalf + secondHalf;
	cout << newNumber << ", " << newNumber + 1 << endl;
}