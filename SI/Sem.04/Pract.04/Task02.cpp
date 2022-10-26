#include <iostream>
int isEven(int num)
{
	if (num % 2 == 0)
	{
		std::cout << "Your number is even - "<<" ";

	}
	else
	{
		std::cout << "Your number is odd - "<<" ";
	}
	return num;
}
int main()
{
	int num = 0;
	std::cout << "Please enter a number: ";
	std::cin >> num;
	std::cout << isEven(num);
}