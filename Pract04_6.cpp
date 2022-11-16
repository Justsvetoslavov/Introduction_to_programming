using namespace std;
#include <iostream>;

bool isCapitalLetter(char S)
{
	if (S < 'A' || S > 'Z')
	{
		return false;
	}
	return true;
}

bool checkSymbol(char S)
{
	if ((S > 'A' && S < 'Z') || (S > 'a' && S < 'z'))
	{
		return true;
	}
	return false;
}

int main()
{
	cout << boolalpha << checkSymbol('b') << endl;
	cout << boolalpha << isCapitalLetter('b') << endl;
}