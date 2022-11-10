

#include <iostream>
using namespace std;

void repeatedNumber(int arr[], int size)
{
	int currElement;
	for (int i = 0; i < size; ++i)
	{
		currElement = arr[i];

		for (int j = i + 1; j < size; ++j)
		{
			if (currElement == arr[j])
			{
				cout << currElement << endl;
			}
		}
	}
}

int main()
{
	int arr[6] = {1, 2, 3, 3, 5 , 5};
	repeatedNumber(arr, 6);
}
