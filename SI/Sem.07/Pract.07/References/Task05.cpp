#include <iostream>
const int SIZE = 100;


int getLengthOfNum(int number)
{
	int length = 0;
	while (number > 0)
	{
		number /= 10;
		length++;
	}
	return length;
}

void convertNumToArray(int* numberArray, int number, int length)
{
	int digit = 0;
	while (number > 0)
	{
		for (int i = length - 1; i >= 0; i--)
		{
			digit = number % 10;
			number /= 10;
			numberArray[i] = digit;
		}
	}
}

void swap(int* numInArrayN, int* numInArrayM, int lengthN, int lengthM, int k)
{
	if (lengthM > k && lengthN > k)
	{
		int temp = numInArrayN[k - 1];
		numInArrayN[k - 1] = numInArrayM[k - 1];
		numInArrayM[k - 1] = temp;
	}
}
void printNewArrays(int* numInArray, int length)
{
	for (int i = 0; i < length; i++)
	{
		std::cout << numInArray[i];
	}
}
int main()
{
	int n = 0;
	int m = 0;
	int k = 0;

	int numInArrayN[SIZE];
	int numInArrayM[SIZE];

	std::cin >> n >> m >> k;
	int lengthOfN = getLengthOfNum(n);
	int lengthOfM = getLengthOfNum(m);

	convertNumToArray(numInArrayN, n, lengthOfN);
	convertNumToArray(numInArrayM, m, lengthOfM);

	swap(numInArrayN, numInArrayM, lengthOfN, lengthOfM, k);

	printNewArrays(numInArrayN, lengthOfN);
	std::cout << std::endl;
	printNewArrays(numInArrayM, lengthOfM);
}

//Да се напише функция, която по дадени
//3 числа - n, m, k разменя k - тите цифри на m и n.
//Ако k е повече от дължината на някое от числата, те остават непроменени.