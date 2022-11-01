// Task12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int FindNearestPowerOfTwoNumber(int baseNumber);
inline int Abs(int number);
int main()
{
    int numberInput = 0;
	std::cout << "Enter number: ";
    std::cin >> numberInput;
	while (numberInput<100 || numberInput > 100000)
	{
		std::cout << "Wrong input" << std::endl;
		std::cout << "Enter new number: ";
		std::cin >> numberInput;
	}
	int nearestNum = FindNearestPowerOfTwoNumber(numberInput);
	std::cout << "The nearest number is: " << nearestNum << std::endl;
}

int FindNearestPowerOfTwoNumber(int baseNumber)
{
	int numberPowerTwo = 1;
	while (numberPowerTwo * 2 < baseNumber)
	{
		numberPowerTwo *= 2;
	}
	if (Abs(numberPowerTwo - baseNumber) > Abs(numberPowerTwo*2-baseNumber))
	{
		numberPowerTwo *= 2;
	}
	return numberPowerTwo;
}
inline int Abs(int number)
{
	return number < 0 ? -number : number;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
