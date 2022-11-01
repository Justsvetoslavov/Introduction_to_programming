// Task07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
bool CheckIsInInterval(int number, int startInterval, int endInterval);
int AskUser(int from, int to);
int main()
{
	int numberUserInput = AskUser(1,10);
	std::cout << "The number is: "<<numberUserInput << std::endl;
}

bool CheckIsInInterval(int number, int startInterval, int endInterval)
{
	if (number>=startInterval && number <= endInterval)
	{
		return true;
	}
	return false;
}
int AskUser(int from, int to)
{
	
	int number = 0;
	while (!CheckIsInInterval(number, from, to))
	{
		std::cout << "Enter number: ";
		std::cin >> number;
		if (!CheckIsInInterval(number, from, to))
		{
			std::cout << "Not In Interval" << std::endl;
		}
		else
		{
			std::cout << "In interval!" << std::endl;
		}
	}	
	return number;
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
