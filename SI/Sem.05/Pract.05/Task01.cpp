#include <iostream>
int* FindRepeatingElement(int* numbers, int length);

int main()
{
	int numbers[] = {1,2,3,0,2,3,6,55,7,1};
	//int numbers[] = {1,2,3,4,5,6,7,8,9,10};
	int* answer = FindRepeatingElement(numbers, 10);
	if (answer[0] == 0)
	{
		std::cout << "No repeating elements!" << std::endl;
	}
	else
	{
		std::cout << "The first repeating element is " <<answer[1]<< std::endl;
	}
}
int* FindRepeatingElement(int* numbers, int length)
{
	int answer[]{0,0};
    int elementToCheck = 0;
	for (int i = 1; i < length; i++)
	{
		elementToCheck = numbers[i];
		for (int j = 0; j < i; j++)
		{
			if (elementToCheck == numbers[j])
			{
				answer[0] = 1;
				answer[1] = elementToCheck;
				return answer;
			}
		}
	}
	return answer;
}
