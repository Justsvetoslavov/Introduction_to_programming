#include <iostream>

int strlen(char* arr)
{
	int index = 0;
	while (arr[index] != '\0')
	{
		index++;
	}
	return index + 1;
}

char** upperAndLowerLetters(char* arr)
{
	char** result = new char*[2];
	int len = strlen(arr);
	result[0] = new char[len];
	result[1] = new char[len];


	//upper
	for (int i = 0; i < len; i++)
	{
		if ('a' <= arr[i] && arr[i] <= 'z')
		{
			result[0][i] = arr[i] - 32;
		}
		else
		{
			result[0][i] = arr[i];
		}
	}
	


	//lower
	for (int i = 0; i < len; i++)
	{
		if ('A' <= arr[i] && arr[i] <= 'Z')
		{
			result[0][i] = arr[i] + 32;
		}
		else
		{
			result[0][i] = arr[i];
		}
	}

	return result;
}

void free(char** arr)
{
	int len = strlen(arr[0]);
	for (int i = 0; i < 2; i++)
	{
		delete[] arr[i];
	}

	delete[] arr;
}

int main()
{
    char arr[400];
	std::cin.getline(arr, 400);
	char** upAndlow = upperAndLowerLetters(arr);
	std::cout << upAndlow[0] << std::endl;
	std::cout << upAndlow[1] << std::endl;

    return 0;
}