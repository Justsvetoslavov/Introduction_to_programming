#include <iostream>
const int MAX_SIZE = 100;
const int SIZE_SYMBOLS = 128;

void PrintWithoutRepeating(char* str)
{
	int symbolsCount[SIZE_SYMBOLS] = {};

	char newStr[MAX_SIZE] = {};
	int indexForNewStr = 0;

	for (int i = 0; i < MAX_SIZE; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}
		if (symbolsCount[str[i]] == -1)
		{
			continue;
		}
		newStr[indexForNewStr] = str[i];
		symbolsCount[str[i]] = -1;
		indexForNewStr++;
	}

	std::cout << newStr;
}

int main()
{
	char str[MAX_SIZE];
	std::cin >> str;

	PrintWithoutRepeating(str);
}

