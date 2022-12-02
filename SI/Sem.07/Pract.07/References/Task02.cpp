#include <iostream>
const char UPPER_BORDER = 'Z';
const char LOWER_BORDER = 'z';
const char UPPER_BORDER_TO_UP = 'A';
const char LOWER_BORDER_TO_SMALL = 'a';
bool toUpper(char& a)
{
	if (a >= LOWER_BORDER_TO_SMALL && a <= LOWER_BORDER)
	{
		a -= 32;
		return true;
	}
	else
	{
		return false;
	}
	
}
bool toLower(char& b)
{
	if (b >= UPPER_BORDER_TO_UP && b <= UPPER_BORDER)
	{
		b += 32;
		return true;
		
	}
	
}
int main()
{
	char symbol;
	std::cin >> symbol;
	if (toUpper(symbol))
	{
		std::cout << symbol;
		return 0;
	}
	if (toLower(symbol));
	{
		std::cout << symbol;
		return 0;
	}
	
	return 0;
}