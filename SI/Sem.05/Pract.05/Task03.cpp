/*
 * Напишете програма, която превръща дадено естествено число в двоична бройна система.
 */

#include <iostream>
using namespace std;

void converter(int number)
{
	int arr[100];
	int counter = 0;
	while (number > 0)
	{
		if (number % 2 == 1)
		{
			arr[counter] = 1;
		}
		else
		{
			arr[counter] = 0;
		}
		counter++;
		number /= 2;
	}

	for (int i = counter - 1; i >= 0; --i)
	{
		cout << arr[i];
	}
}

int main()
{
	converter(87);
}
