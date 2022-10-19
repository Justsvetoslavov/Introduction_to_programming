
#include <iostream>

int main()
{
    int myNumber = 0;
    std::cin >> myNumber;

	if (myNumber < 0 || myNumber > 100)
	{
		std::cout << "Invalid input";
	}
	int counter = 0;
	int currentNumber = 0;

	do
	{
		std::cin >> currentNumber;
		counter++;

		(currentNumber > myNumber) ? (std::cout << "greater") : (std::cout << "lesser");
		std::cout << std::endl;
	} while (currentNumber != myNumber);

	std::cout << "Attempts: " << counter - 1 << std::endl;
	return 0;
}
