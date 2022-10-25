#include <iostream>

int main() {
	int target = 0;

	std::cout << "Enter a number between 0 and 100: ";
	std::cin >> target;

	if (target >= 0 && target <= 100) {
		int counter = 0, currentGuess = -1;
		while (currentGuess != target) {
			std::cin >> currentGuess;
			std::cout << (currentGuess > target ? "Higher" : "Lower") << std::endl;
			counter++;
		}

		std::cout << "Congratulations, you guessed right! In only took you " << counter << " tries to do so. :)" << std::endl;
	} else {
		std::cout << "Entered number invalid." << std::endl;
	}
	return 0;
}