#include <iostream>

int main()
{
	int arr[] = {0, 8, 7, 6, 4, 7, 9, 7, 8, 6};

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr[i] == arr[j] && i != j)
			{
				std::cout << arr[i] << std::endl;
				return 0;
			}
		}
	}
}
