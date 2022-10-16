#include <iostream>

int main() {
	double number1 = 0, number2 = 0;

	std::cout << "Enter first number value: ";
	std::cin >> number1;
	std::cout << "Enter second number value: ";
	std::cin >> number2;

	number1 > number2 ? std::cout << "First number is larger than second number.\n" : std::cout << "Second number is larger than first number.\n";

	return 0;
}