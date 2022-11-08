#include <iostream>
void GetBinaryDigits(int number, int* binaryDigits);
void PrintBinary(int* binaryDigits, int countDigits);
int main()
{
	int number = 0;
	int binaryDigits[100];
	std::cin >> number;
	GetBinaryDigits(number, binaryDigits);
	int lengthBinaryDigits = ceil(log2(number));
	PrintBinary(binaryDigits, lengthBinaryDigits);
}

void GetBinaryDigits(int number, int* binaryDigits)
{
	int operativeNum = number;
	int counter = 0;
	while (operativeNum > 0)
	{
		binaryDigits[counter] = operativeNum % 2;
		operativeNum /= 2;
		counter++;
	}
}

void PrintBinary(int* binaryDigits, int countDigits)
{
	int countDigitsPerGroup = 0;
	if (countDigits % 4 != 0)
	{
		int restZeros = 4 - (countDigits % 4);
		for (int i = 0; i < restZeros; i++)
		{
			std::cout << 0;
			countDigitsPerGroup++;
		}
	}

	for (int i = countDigits-1; i >= 0; i--)
	{
		if (countDigitsPerGroup % 4 == 0  && countDigitsPerGroup!=0)
		{
			std::cout << " ";
		}
		std::cout << binaryDigits[i];
		countDigitsPerGroup++;
	}
}




