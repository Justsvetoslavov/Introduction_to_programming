#include <iostream>
using namespace std;

void arrSection(int *firstArr, int *secondArr, int firstSize, int secondSize)
{
	int counter = 0;
	int resultArr[100];
	for (int i = 0; i < firstSize; ++i)
	{
		int currEl = firstArr[i];
		for (int j = 0; j < secondSize; ++j)
		{
			if (currEl == secondArr[j])
			{
				resultArr[counter++] = currEl;
			}
		}
	}

	for (int i = 0; i < counter; ++i)
	{
		cout << resultArr[i] << ' ';
	}
}

int main()
{
	int firstArr[] = { 1, 5, 9, 12, 3 };
	int secondArr[] = {2, 9, 3, 11, 8, 10};

	arrSection(firstArr, secondArr, 5, 6);
}
