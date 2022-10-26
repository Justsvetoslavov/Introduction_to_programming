#include <iostream>
void isPositive(int numberP)
{
	if (numberP >= 0)
	{
		std::cout << "Your number is positive";
	}
	else
	{
		std::cout << "Your number is negative";
	}
	
}
void isNegative(int numberN)
{
	if (numberN < 0)
	{
		std::cout << "Your number is negative";
	}
	else
	{
		std::cout << "Your number is not negative";
	}
	
}
int main()
{
	int myNumber = 0;
	std::cout << "Enter your number: ";
	std::cin >> myNumber;
	isPositive(myNumber);
	std::cout << std::endl;
	isNegative(myNumber);
	return 0;
}