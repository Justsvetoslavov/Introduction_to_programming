#include <iostream>

int main()
{
	//works only for ascending numbers
	//in progress
	
	int myNumber = 0;

	std::cin >> myNumber;
	int currentNumber = 0;
	int missing = 0;

	for (int i = 1; i < myNumber; i++)
	{
		std::cin >> currentNumber;
		if (currentNumber != i)
		{
			missing = --currentNumber;
			break;
		}
	}
	std::cout << missing;
}
