#include <iostream>
using namespace std;


/*
 *Напишете програма, която подрежда елементите на редица от N числа, като първите елементи са четните, вторите - нечетните.
Бонус: Сортирайте четните във възходящ ред,а нечетните в низходящ ред(отново четните са първи,а нечетните - втори).

 */

void sortArray(int (& arr)[], const int SIZE)
{
	int currArr[SIZE];
	int counter = 0;

	for (int i = 0; i < SIZE; ++i)
	{
		if (arr[i] % 2 == 0)
		{
			currArr[counter++] = arr[i];
		}

	}

	for (int i = 0; i < SIZE; ++i)
	{
		if (arr[i] % 2 != 0)
		{
			currArr[counter++] = arr[i];
		}
	}

	for (int i = 0; i < SIZE; ++i)
	{
		int currEl = currArr[i];

		for (int j = counter + 1; j < SIZE; ++j)
		{
			if (currArr[j] < currEl && currArr[j] % 2 == 0)
			{
				currArr[counter] = currArr[j];
				currArr[j] = currEl;
			}

			else if (currArr[j] % 2 != 0 && currArr[j] > currEl)
			{
				currArr[counter] = currArr[j];
				currArr[j] = currEl;
			}
		}
	}

	for (int i = 0; i < SIZE; ++i)
	{
		cout << currArr[i] << ' ';
	}
}

int main()
{
	const int SIZE = 10;
	int arr[SIZE] { 1, 9, 8, 6, 0, 5, 3, 1, 8, 6 };
	sortArray(( & arr)[], SIZE);
}
