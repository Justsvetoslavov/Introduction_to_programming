#include <iostream>
bool IsPalindrome(int number);
int GetLength(int number);
int GetNewNumber(int number);

int main()
{
	int number = 0;
	std::cin >> number;
	std::cout << (IsPalindrome(number)?"yes":"no");
}

bool IsPalindrome(int number)
{
	int firstEl = 0;
	int lastEl = 0;
	int numberCopy = number;
	while (numberCopy/10>0)
	{
		firstEl = numberCopy / pow(10, GetLength(numberCopy) - 1);
		lastEl = numberCopy % 10;
		
		if (firstEl != lastEl)
		{
			return false;
		}
		numberCopy = GetNewNumber(numberCopy);
	}
	return true;
}
int GetLength(int number)
{
    int length = 0;
	while (number>0)
	{
		length++;
		number /= 10;
	}
	return length;
}

int GetNewNumber(int number)
{
	int newNumber = 0;

	for (int i = GetLength(number)-2 ; i > 0; i--)
	{
		int currNum = number / pow(10, i);
		newNumber = newNumber * 10 + currNum % 10;
	}
	return newNumber;
}
