#include <iostream>
using namespace std;

void toUpper(char& letter) 
{
	letter -= 'a' - 'A';
}

void toLower(char& letter)
{
	letter += 'a' - 'A';
}
