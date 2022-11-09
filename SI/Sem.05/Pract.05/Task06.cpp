#include <iostream>
void Sort(int* numbers, int length);
int GetMaxElement(int* numbers, int startIndex, int endIndex);
int GetMinElement(int* numbers, int startIndex, int endIndex);
bool HaveRepeatingNumbers(int* numbers, int length);

int main()
{
	const int LENGTH = 6;
	//int numbers[]{1,2,3,4,5,6};
	//int numbers[]{6,2,5,8,4,1};
	int numbers[]{ 1,5,8,44,6,2 };

	if (HaveRepeatingNumbers(numbers, LENGTH))
	{
		std::cout << "Incorrect numbers!" << std::endl;
		return 0;
	}
	bool isBetterThanNext = true;
	Sort(numbers, LENGTH);
	int startIndex = 0;
	int endIndex = LENGTH;
	for (int i = 0; i < LENGTH; i++)
	{
		if (isBetterThanNext)
		{
			int max = GetMaxElement(numbers, startIndex, endIndex);
			if (i == LENGTH - 1)
			{
				std::cout << max << std::endl;
			}
			else
			{
				std::cout << max << " > ";
			}

			endIndex--;
			isBetterThanNext = false;
		}
		else
		{
			int min = GetMinElement(numbers, startIndex, endIndex);
			if (i == LENGTH - 1)
			{
				std::cout << min << std::endl;
			}
			else
			{
				std::cout << min << " < ";
			}

			startIndex++;
			isBetterThanNext = true;
		}
	}
}
	void Sort(int* numbers, int length)
	{
		for (int i = 0; i < length - 1; i++)
		{
			for (int j = i + 1; j < length; j++)
			{
				if (numbers[i] > numbers[j])
				{
					int tmp = numbers[i];
					numbers[i] = numbers[j];
					numbers[j] = tmp;
				}
			}
		}
	}

	int GetMaxElement(int* numbers, int startIndex, int endIndex)
	{
		int max = numbers[startIndex];
		for (int i = startIndex + 1; i < endIndex; i++)
		{
			if (numbers[i] > max)
			{
				max = numbers[i];
			}
		}
		return max;
	}

	int GetMinElement(int* numbers, int startIndex, int endIndex)
	{
		int min = numbers[startIndex];
		for (int i = startIndex + 1; i < endIndex; i++)
		{
			if (numbers[i] < min)
			{
				min = numbers[i];
			}
		}
		return min;
	}

	bool HaveRepeatingNumbers(int* numbers, int length)
	{
		for (int i = 0; i < length-1; i++)
		{
			for (int j = i+1; j < length; j++)
			{
				if (numbers[i]==numbers[j])
				{
					return true;
				}
			}
		}
		return false;
	}


