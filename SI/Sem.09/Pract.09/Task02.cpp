#include <iostream>

long long toPow(int number, int pow)
{
	if (pow == 0) 
	{
		return 1;
	}

	if (pow % 2 == 0)
	{
		long long current = toPow(number, pow / 2);
		return current * current;
	}
	else
	{
		return number * toPow(number, pow - 1);
	}
}
int main()
{
	std::cout << toPow(2, 3);
	return 0;
}


