#include <iostream>
const int MAX_SIZE = 100;

void FlipArr(char* arr, int start)
{
	for (int i = start; i < MAX_SIZE; i++)
	{
		if (arr[i] == '\0')
		{
			break;
		}
		arr[i] = arr[i + 1];
	}
}

void RemoveRepeating(char* str)
{
	for (int i = 0; i < MAX_SIZE; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}
		for (int j = i + 1; j < MAX_SIZE; j++)
		{
			if (str[j] == '\0')
			{
				break;
			}
			if (str[i] == str[j])
			{
				FlipArr(str, j);
				j--;
			}
		}
	}
}

int main()
{
	char str[MAX_SIZE];
	std::cin >> str;

	RemoveRepeating(str);
	std::cout << str;
}
