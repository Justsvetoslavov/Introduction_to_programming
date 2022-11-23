#include <iostream>
int GetOnesCount(int number);
int main()
{
	int number = 0;
	std::cin >> number;
	int countOnes = GetOnesCount(number);
	std::cout << countOnes;
}
int GetOnesCount(int number) 
{
	int countOnes = 0;
	while (number > 0)
	{
		if (number%2 == 1)
		{
			countOnes++;
		}
		number /= 2;
	}
	return countOnes;
}

