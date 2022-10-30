#include <iostream>
using namespace std;

bool isCapitalLetter(char S)
{
	//characters from A to Z are with ascii value 65 to 90
	return (S >= 65 && S <= 90);
}

bool checkSymbol(char S)
{
	//characters from a to z are with ascii value 97 to 122
	return ((S >= 97 && S <= 122) || isCapitalLetter(S));
}

int main()
{
	char S;

	cout << "Enter a character: ";

	cin >> S;

	cout << (isCapitalLetter(S) ? "This character is a capital letter" : "This character is NOT a capital letter") << endl;
	cout << (checkSymbol(S) ? "This character is a letter" : "This character is NOT a letter");
}
