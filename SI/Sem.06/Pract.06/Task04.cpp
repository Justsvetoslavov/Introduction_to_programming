#include <iostream>
int GetNumberFromTheLastBits(int number, int countLastBits);
void Swap(int* number, int length);

int main()
{
	int numberInput = 0;
	int countLastBits = 0;
	std::cin >> numberInput >> countLastBits;
	int newNumber = GetNumberFromTheLastBits(numberInput, countLastBits);
	std::cout << newNumber;
}
int GetNumberFromTheLastBits(int numberInput, int countLastBits)
{
	int number = numberInput;
	int binaryDigits[100];
	int length = 0;

	//convert to binary
	while (number > 0)
	{
		binaryDigits[length] = number % 2;
		length++;
		number /= 2;
	}
	if (countLastBits > length)
	{
		return -1;
	}

	//reverse array
	Swap(binaryDigits, length);

	//convert to ten NS only the last n bits

	for (int i = length - 1; i > length - 1 - countLastBits; i--)
	{
		int currBit = binaryDigits[i];
		number += currBit * pow(2, length - 1 - i);
	}
	return number;

}
void Swap(int* number, int length)
{
	for (int i = 0; i < length / 2; i++)
	{
		int tmp = number[i];
		int a = number[length - 1 - i];
		number[i] = number[length - 1 - i];
		number[length - 1 - i] = tmp;
	}
}
