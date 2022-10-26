#include <iostream>
int main() {
	int numberInput = 2, numOfChars = 1;
	char symbolInput = '*';
	std::cout << "Enter a num[2;9] and a char S: " << std::endl;
	std::cin >> numberInput;
	std::cin >> symbolInput;
	if (numberInput >= 2 && numberInput <= 9) {
		for (int i = 1; i <= numberInput; i++) {
			for (int j = numberInput - i; j >= 1; j--) {
				std::cout << " ";
			}
			for (int k = 1; k <= numOfChars; k++) {
				std::cout << symbolInput;
			}
			numOfChars += 2;
			std::cout << std::endl;
		}
		//numOfChars = lastRowCountOfChar + 2;
		numOfChars -= 2;
		for (int i = 1; i < numberInput; i++) {
			numOfChars -= 2;
			for (int j = 1; j <= i; j++) {
				std::cout << " ";
			}
			for (int k = 1; k <= numOfChars; k++) {
				std::cout << symbolInput;
			}
			std::cout << std::endl;
		}
	}
	else {
		std::cout << "Incorrect input!" << std::endl;
	}
	return 0;
}
