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


char* hideNums(char* arr)
{
	char* result = new char[strlen(arr)];
	int len = strlen(arr);
	for (int i = 0; i < len; i++)
	{
		if ('0' <= arr[i] && arr[i] <= '9')
		{
			result[i] = '*';
		}
		else
		{
			result[i] = arr[i];
		}
			
		
	}
	return result;
}


int main()
{
    char arr[400];
	std::cin.getline(arr, 400);
	char* withoutNums = hideNums(arr);
	std::cout << withoutNums << std::endl;
	delete[] withoutNums;
    return 0;
}