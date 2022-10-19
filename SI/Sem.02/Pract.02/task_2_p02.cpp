

#include <iostream>

int main()
{
	char symbol;
	std::cout << "Enter: ";
	std::cin >> symbol;
	if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z'))
	{
		if ((symbol == 'a') || (symbol == 'o') || (symbol == 'i') || (symbol == 'u') || (symbol == 'e') || (symbol == 'A') || (symbol == 'O') || (symbol == 'I') || (symbol == 'U') || (symbol == 'E'))
		{
			std::cout << "It is a vowel!";
		}
		else
		{
		    std::cout << "It is not a vowel!";
		}
	}
	else 
	{
		std::cout << "It is not a letter!";
	}
	return 0;

}

