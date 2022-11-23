#include <iostream>
void ConvertNumericSystems(char* numbers, int length, int firstNS, int secondNS);
int ConvertToTenthNS(char* numbers, int length, int firstNS);
char* ConvertToSecondNS(int numberInTenthNS, int secondNS);
void Print(char* numbers, int length);

const int asciiCodeForA = 65;
const int asciiCodeForZero = 48;
int lengthNewArr = 0;
int main()
{
	int length = 0;
	std::cin >> length;
	char numbers[100];
	for (int i = 0; i < length; i++)
	{
		std::cin >> numbers[i];
	}

	int firstNumericSystem = 0;
	int secondNumericSystem = 0;
	std::cin >> firstNumericSystem;
	std::cin >> secondNumericSystem;

	ConvertNumericSystems(numbers, length, firstNumericSystem, secondNumericSystem);
}
void ConvertNumericSystems(char* numbers, int length, int firstNS, int secondNS)
{
	int numberInTenthNS = ConvertToTenthNS(numbers, length, firstNS);
	char* newDigitsArr = ConvertToSecondNS(numberInTenthNS, secondNS);
	//Print(newDigitsArr, lengthNewArr);
}
int ConvertToTenthNS(char* numbers, int length, int firstNS)
{
	unsigned int numberInTenthNS = 0;
	
	const int diffLettersNumbers = 55;
	int numberMultiplier = 0;
	for (int i = 0; i < length; i++)
	{
		char currDigit = (numbers[length - 1 - i]);
		if ((numbers[length - 1 - i]) >= asciiCodeForA)
		{
			numberMultiplier = (int)currDigit - diffLettersNumbers;
		}
		else
		{
			numberMultiplier = numbers[length - 1 - i]-asciiCodeForZero;
		}
		numberInTenthNS += numberMultiplier * pow(firstNS, i);
	}

	return numberInTenthNS;
}

char* ConvertToSecondNS(int numberInTenthNS, int secondNS)
{
	char numbers[100];
	int counter = 0;
	const int maxDecimalValue = 10;
	while (numberInTenthNS > 0)
	{
		int currDigit = numberInTenthNS % secondNS;
		if (currDigit >= maxDecimalValue)
		{
			numbers[counter] = asciiCodeForA+(currDigit-maxDecimalValue);
		}
		else
		{
			numbers[counter] = asciiCodeForZero + currDigit;
		}
		
		numberInTenthNS /= secondNS;
		counter++;
	}
	lengthNewArr = counter;
	for (int i = 0; i < counter/2; i++)
	{
		char tmp = numbers[i];
		char digitLastPos = numbers[counter - 1 - i];
		numbers[i] = numbers[counter - 1 - i];
		numbers[counter - 1 - i] = tmp;
	}
	/*
	for (int i = 0; i < counter; i++)
	{
		char a = numbers[i];
		std::cout << numbers[i];
	}
	*/

	return numbers;
}

void Print(char* numbers, int length)
{
	for (int i = 0; i < length; i++)
	{
		char a = numbers[i];
		std::cout << numbers[i];
	}
	std::cout << std::endl;
}
