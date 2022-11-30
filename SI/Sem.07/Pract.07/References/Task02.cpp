#include <iostream>
const char UPPER_BORDER = 'Z';
const char LOWER_BORDER = 'z';
const char UPPER_BORDER_TO_UP = 'A';
const char LOWER_BORDER_TO_SMALL = 'a';
void toUpper(char& a)
{
	if (a >= LOWER_BORDER_TO_SMALL && a <= LOWER_BORDER)
	{
		a -= 32;
	}
	else
	{
		std::cout << false;
	}
}
void toLower(char& b)
{
	if (b >= UPPER_BORDER_TO_UP && b <= UPPER_BORDER)
	{
		b += 32;
	}
	else
	{
		std::cout << false;
	}
}
int main()
{
	char symbol;
	std::cin >> symbol;
	if (symbol >= LOWER_BORDER_TO_SMALL && symbol <=LOWER_BORDER)
	{
		toUpper(symbol);
	}
	
	else if (symbol >= UPPER_BORDER_TO_UP && symbol <= UPPER_BORDER)
	{
		toLower(symbol);
	}
	std::cout << symbol;
	return 0;
}