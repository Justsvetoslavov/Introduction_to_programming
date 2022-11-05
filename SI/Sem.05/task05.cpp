#include <iostream>

int main()
{
    int arr1[] = { 1, 2, 3, 6, 7, 8 };
    int arr2[] = { 1, 2, 5, 9, 4, 3 };

	int arr1Size = 6;
	int arr2Size = 6;

	for (int i = 0; i < arr1Size; i++)
	{
		for (int j = 0; j < arr2Size; j++)
		{
			if (arr1[i] == arr2[j])
			{
				std::cout << arr1[i] << " ";
			}
		}
	}
}
