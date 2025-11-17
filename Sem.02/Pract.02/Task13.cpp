#include <iostream>

int main()
{
	int number;

	std::cin >> number;

	if (number < 1000 || number > 9999)
	{
		std::cout << "Number must be in range [1000..9999]!" << std::endl;
		return 1;
	}

	int firstDigit = number / 1000;
	int secondDigit = (number / 100) % 10;
	int thirdDigit = (number / 10) % 10;
	int fourthDigit = number % 10;

	int firstNumber = firstDigit * 10 + fourthDigit;
	int secondNumber = secondDigit * 10 + thirdDigit;

	if (firstNumber < secondNumber)
	{
		std::cout << "less (" << firstNumber << "<" << secondNumber << ")" << std::endl;
	}
	else if (firstNumber == secondNumber)
	{
		std::cout << "equal (" << firstNumber << "=" << secondNumber << ")" << std::endl;
	}
	else
	{
		std::cout << "greater (" << firstNumber << ">" << secondNumber << ")" << std::endl;
	}

	return 0;
}
