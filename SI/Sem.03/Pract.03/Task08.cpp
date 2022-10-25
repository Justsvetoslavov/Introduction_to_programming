#include <iostream>

int main() {
	int n = 0;
	char s;

	std::cin >> n >> s;

	const int numberOfRows = 2 * n - 1;

	if (n >= 2 && n <= 9) {
		for (int i = 1; i <= numberOfRows; i++) {
			const int numberOfEmptySpaces = abs(n - i), numberOfSymbols = numberOfRows - 2 * numberOfEmptySpaces;

			for (int j = 0; j < numberOfEmptySpaces; j++) {
				std::cout << ' ';
			}
			for (int j = 0; j < numberOfSymbols; j++) {
				std::cout << s;
			}

			std::cout << std::endl;
		}
	} else {
		std::cout << "Invalid input." << std::endl;
	}

	return 0;
}