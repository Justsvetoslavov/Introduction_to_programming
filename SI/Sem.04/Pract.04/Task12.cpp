#include <iostream>

using namespace std;

int checkInput() {
	int input;
	do {
		cout << "Enter input: " << endl;
		cin >> input;
	} while (input < 100 || input > 1000000);

	return input;
}

int findTheNearest(int input) {
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

int main()
{
	int input = checkInput();

	cout << findTheNearest(input);

	return 0;
}
