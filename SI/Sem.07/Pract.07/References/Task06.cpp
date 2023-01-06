#include <iostream>
//Да се напише функция, която разделя едно число на 2 равни части в 2 целочислени променливи.
// Ако числото е с нечетен брой цифри, то първото трябва да е по - дълго.
//
//Вход: 1234567 | Изход : 1234 527
//Вход : 876543 | Изход : 876 543
int countDigits(int number)
{
	int count = 0;
	while(number != 0)
	{
		number /= 10;
		++count;
	}
	return count;
}
void convertNumberInArray(int& number)
{
	int counter = countDigits(number);
	int numberInArray[200] = { 0, };
	int i = 0;
	while (number > 0)
	{
		numberInArray[i] = number % 10;
		number /= 10;
		i++;
	}
	
	int j = 0;
	int l = 0;
	int arrayFirstDigits[100] = { 0, };
	int arraySecondDigits[100] = { 0, };
	int sizeForArray1 = 0;
	int sizeForArray2 = 0;
	if (counter % 2 != 0)
	{
		sizeForArray1 = counter / 2 + 1;
		sizeForArray2 = counter / 2;
		arrayFirstDigits[0] = numberInArray[counter -1];
		for (int i = 1; i < sizeForArray1; i++)
		{
			arrayFirstDigits[i] = numberInArray[counter - i - 1];
		}
		arraySecondDigits[0] = numberInArray[counter - sizeForArray1-1];
		for (int i = 1; i < sizeForArray2; i++)
		{
			arraySecondDigits[i] = numberInArray[counter - sizeForArray1 - i - 1];
		}
		
	}
	else
	{
		sizeForArray1 = counter / 2;
		sizeForArray2 = counter / 2;
		arrayFirstDigits[0] = numberInArray[counter - 1];
		for (int i = 1; i < sizeForArray1; i++)
		{
			arrayFirstDigits[i] = numberInArray[counter - i - 1];
		}
		arraySecondDigits[0] = numberInArray[counter - sizeForArray1 - 1];
		for (int  i = 1; i < sizeForArray2; i++)
		{
			arraySecondDigits[i] = numberInArray[counter - sizeForArray1 - i - 1];
		}
	}
	for (int  i = 0; i < sizeForArray1; i++)
	{
		std::cout << arrayFirstDigits[i];
	}
	std::cout << " ";
	for (int i = 0; i < sizeForArray2; i++)
	{
		std::cout << arraySecondDigits[i];
	}
}


int main()
{
	int number = 0;
	std::cin >> number;
	convertNumberInArray(number);
}