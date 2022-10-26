#include <iostream>

using namespace std;

int main() {
	int target = 0;

	cout << "Enter a number between 0 and 100: ";
	cin >> target;

	if (target < 0 || target > 100) {
		cout << "Entered number invalid." << endl;
		return 0;
	}

	int counter = 0, currentGuess;
	while (true) {
		cin >> currentGuess;
		counter++;

		if (currentGuess == target) {
			break;
		}

		cout << (currentGuess > target ? "Higher" : "Lower") << endl;
	}

	cout << "Congratulations, you guessed right! In only took you " << counter << " tries to do so. :)" << endl;
}