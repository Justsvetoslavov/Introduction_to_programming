#include <iostream>
const char UPPER_CASE_UPPER_BORDER = 'A';
const char LOWER_CASE_UPPER_BORDER = 'a';
const char LOWER_CASE_LOWER_BORDER = 'z';
const char UPPER_CASE_LOWER_BORDER = 'Z';
const char UPPER_TO_LOWER_TRANSFORM= 32;

void toUpper(char& letter)
{
	letter = letter - UPPER_TO_LOWER_TRANSFORM;
}

void toLower(char& letter)
{
	letter = letter + UPPER_TO_LOWER_TRANSFORM;
}


int main()
{
	char letter;
	std::cin >> letter;
	if (letter >= LOWER_CASE_UPPER_BORDER &&letter <= LOWER_CASE_LOWER_BORDER)
	{
		toUpper(letter);
	}
	else 
	{
		toLower(letter);
	}

	std::cout << letter;

}

//toUpper, която приема буква и я превръща в съответстващата й голяма;
//toLower, която приема буква и я превръща в съответстващата й малка.
