#include <iostream>

int main()
{
	int num1, num2, num3;

	std::cin >> num1 >> num2 >> num3;

	int smallest, middle, largest;

	// Find smallest
	if (num1 <= num2 && num1 <= num3)
	{
		smallest = num1;
		if (num2 <= num3)
		{
			middle = num2;
			largest = num3;
		}
		else
		{
			middle = num3;
			largest = num2;
		}
	}
	else if (num2 <= num1 && num2 <= num3)
	{
		smallest = num2;
		if (num1 <= num3)
		{
			middle = num1;
			largest = num3;
		}
		else
		{
			middle = num3;
			largest = num1;
		}
	}
	else
	{
		smallest = num3;
		if (num1 <= num2)
		{
			middle = num1;
			largest = num2;
		}
		else
		{
			middle = num2;
			largest = num1;
		}
	}

	std::cout << smallest << " " << middle << " " << largest << std::endl;

	return 0;
}
