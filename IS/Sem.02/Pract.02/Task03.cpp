#include <iostream>

int main() {
	double number1, number2;

	std::cout << "Enter first number value: ";
	std::cin >> number1;
	std::cout << "Enter second number value: ";
	std::cin >> number2;

	if (number1 == number2) {
		std::cout << "Both numbers are equal." << std::endl;
		return 0;
	}

	std::cout << (number1 > number2 ? "The first number is larger than the second number." : "The second number is larger than the first number.") << std::endl;

	return 0;
}
