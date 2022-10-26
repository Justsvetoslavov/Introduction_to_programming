// TaskInClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Task 1
int sum(int a, int b) {
	return a + b;
}

//Task 2
bool isEven(int input) {
	return input % 2 == 0;
}

//Task 3
bool isPositive(int input) {
	return input > 0;
}

bool isNegative(int input) {
	return input < 0;
}

// Task 4
int abs(int input) {
	return (input < 0) ? -input : input;
}

double fabs(double input) {
	return (input < 0) ? -input : input;
}

// Task 5
void print(char input, int times) {
	for (int i = 1; i <= times; i++) {
		cout << input << " ";
	}
}

// Task 6
bool isCapitalLetter(char input) {
	return (input >= 65 && input <= 90);
}

bool isLetter(char input) {
	return ((input >= 65 && input <= 90) || (input >= 97 && input <= 122));
}

// Task 8
int pow(int number, unsigned int power) {
	if (power <= 0) {
		return -1;
	}
	int result = 1;
	for (int i = 0; i <= power; i++) {
		result *= number;
	}
	return result;
}

// Task 9
int calculate(int a, int b, char action) {
	switch (action) {
		case '%': return a % b;
		case '-': return a - b;
		case '*': return a * b;
		case '/': return a / b;
		default: return a + b;
	}
}
int main()
{
	cout << "Try the functions";
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
