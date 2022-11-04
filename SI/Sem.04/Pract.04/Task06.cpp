
#include <iostream>
using namespace std;

bool checkSymbol(char S)
{
	return ((S >= 65 && S <= 90) || (S >= 97 && S <= 122));
}


bool isCapitalLetter(char S)
{
	

	if (checkSymbol)
	{
		return (S >= 65 && S <= 90);
	}
	else
	{
		return 0;
	}
		
}

int main()
{
	
	cout << isCapitalLetter('A');
}
