#include <iostream>
using namespace std;

void replaceSymbols(char* arr, char x, char a, char b)
{
	int index = 0;
	int occurances = 0;

	while(arr[index] != '\0')
	{
		if (arr[index] == x)
		{
			(occurances % 2 == 0) ? arr[index] = a : arr[index] = b;
			occurances++;
		}

		index++;
	}
}

int main()
{
	char arr[] = "H_ll_ my fri_nd";
	replaceSymbols(arr, '_', 'e', 'o');

	cout << arr;
}
