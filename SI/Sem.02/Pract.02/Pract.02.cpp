#include <iostream>


using namespace std;

int main()
{

	//ex 2
	char symbol = ' ';
	cout << "Enter letter:";
	cin >> symbol;
	if (symbol>='A' && symbol<='z')
	{
	    switch (symbol)
	    {
	    case 'A':
	    case 'a':
	    case 'E':
	    case 'e':
	    case 'I':
	    case 'i':
	    case 'O':
	    case 'o':
	    case 'U':
	    case'u':
	        cout << "Vowel latin letter.";
	        break;
	    default:
	        cout << "Consonant latin letter.";
	        break;
	    }
	}
	else
	{
	    cout << "Not a latin letter";
	}
}