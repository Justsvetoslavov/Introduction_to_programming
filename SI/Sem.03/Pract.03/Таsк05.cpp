#include <iostream>
int main() {
	int number = 1, testNum = 0, count = 0;
	std::cout << "Input number between 1 and 100: ";
	std::cin >> number;
	if (number >= 1 && number <= 100) {
		do {
			std::cin >> testNum;
			if (testNum > number) {
				std::cout << testNum << " > " << std::endl;
			}
			if (testNum < number) {
				std::cout << testNum << " < " << std::endl;
			}
			count++;
		} while (testNum != number);
		std::cout <<"Count: " << count << std::endl;
	}
	else {
		std::cout << "Wrong number!" << std::endl;
	}
}
