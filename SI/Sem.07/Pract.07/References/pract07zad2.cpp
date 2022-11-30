

#include <iostream>
using namespace std;

void toUpper(char& letter) 
{
	int difference = 'a' - 'A';
	letter -= difference;
}

void toLower(char& letter)
{
	int difference = 'a' - 'A';
	letter += difference;
}

