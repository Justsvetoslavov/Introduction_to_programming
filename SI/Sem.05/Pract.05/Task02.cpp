// Task02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void SortEvensOdds(int* numbers, int length);
void InsertElement(int indexElement, int indexToInsert, int* numbers, int length);
void SortArray(int* numbers, int length);
int main()
{
	//int numbers[] = { 1,88,2,3,5,11,12,6,7,4 };
	int numbers[] = { 5,2,88,23,45,45,1,8,43,0 };
	//int numbers[] = { 3,5,7,9,11,7,5,5,5,5 };
	//int numbers[] = { 2,4,6,66,2,-4,6,8,10,2 };

	int length = 10;
	SortEvensOdds(numbers, length);
	SortArray(numbers, length);
	for (int i = 0; i < length; i++)
	{
		if (i == length-1)
		{
			std::cout << numbers[i]<<std::endl;
		}
		else
		{
			std::cout << numbers[i] << ", ";
		}
	}
}

void SortEvensOdds(int* numbers, int length)
{
	int counterInsertedElements = 0;
	for (int i = 0; i < length - 1 - counterInsertedElements; i++)
	{
		int element = numbers[i];
		if (element % 2 != 0)
		{
			InsertElement(i, length - 1 - counterInsertedElements, numbers, length);
			i--;
			counterInsertedElements++;
		}
	}
}
void InsertElement(int indexElement, int indexToInsert, int* numbers, int length)
{
	int container = numbers[indexElement];
	for (int i = indexElement; i < indexToInsert; i++)
	{
		numbers[i] = numbers[i + 1];
	}
	numbers[indexToInsert] = container;
}
void SortArray(int* numbers, int length)
{
	int indexOdd = -1;
	bool areEvensSorted = false;
	bool areOddsSorted = false;

	//bubble sort kind of way
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if (numbers[i] % 2 == 0 && numbers[j] % 2 == 0)//the current and the next are even
			{
				if (numbers[i] > numbers[j])
				{
					int container = numbers[i];
					numbers[i] = numbers[j];
					numbers[j] = container;
				}
			}
			else if (numbers[i] % 2 != 0 && numbers[j] % 2 != 0)//the current and the next are odd
			{
				if (numbers[i] < numbers[j])
				{
					int container = numbers[i];
					numbers[i] = numbers[j];
					numbers[j] = container;
				}
			}

		}
	}
}
