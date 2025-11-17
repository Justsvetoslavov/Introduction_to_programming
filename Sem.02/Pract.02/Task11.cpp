#include <iostream>

int main()
{
	int digit1, digit2, digit3;

	std::cin >> digit1 >> digit2 >> digit3;

	int largest, middle, smallest;

	// Find largest digit
	if (digit1 >= digit2 && digit1 >= digit3)
	{
		largest = digit1;
		if (digit2 >= digit3)
		{
			middle = digit2;
			smallest = digit3;
		}
		else
		{
			middle = digit3;
			smallest = digit2;
		}
	}
	else if (digit2 >= digit1 && digit2 >= digit3)
	{
		largest = digit2;
		if (digit1 >= digit3)
		{
			middle = digit1;
			smallest = digit3;
		}
		else
		{
			middle = digit3;
			smallest = digit1;
		}
	}
	else
	{
		largest = digit3;
		if (digit1 >= digit2)
		{
			middle = digit1;
			smallest = digit2;
		}
		else
		{
			middle = digit2;
			smallest = digit1;
		}
	}

	int largestNumber = largest * 100 + middle * 10 + smallest;
	std::cout << largestNumber << std::endl;

	return 0;
}
