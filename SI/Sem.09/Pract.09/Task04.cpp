#include <iostream>
const int LENGTH = 10;

bool isIncreasing(int* sequence, int ai, int aj)
{

	if (aj == LENGTH)
	{
		return true;
	}

	if (sequence[aj] < sequence[ai])
	{
		return false;
	}
	else
	{
		return isIncreasing(sequence, ai + 1, aj + 1);
	}
	return true;
}

int main()
{
	int sequence[LENGTH] = { 1,2,3,4,5,6,7,8,9,10 };
	if (isIncreasing(sequence, 0, 1))
	{
		std::cout << "It is incresing";
	}
	else
	{
		std::cout << "It is not increasing";

	}
	return 0;
}
 