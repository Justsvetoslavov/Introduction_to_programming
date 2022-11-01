// Task08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int Pow(int num, unsigned int N);
int main()
{
	int number = 0;
	//how can that be fixed - we want to be unsigned, but if we enter negative it brakes?
	int power = 0;

	std::cin >> number>>power;

	if (power >= 0)
	{
		std::cout << "The rezult is " << Pow(number, power) << std::endl;
	}
	else
	{
		std::cout << "Wrong input!" << std::endl;
	}
}

int Pow(int num, unsigned int N)
{
	int rezult = 1;
	for (int i = 0; i < N; i++)
	{
		rezult *= num;
	}
	return rezult;
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
