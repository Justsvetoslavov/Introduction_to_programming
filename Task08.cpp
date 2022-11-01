

#include <iostream>
using namespace std;

int main()
{
	int n;
	char s;
	cin >> n >> s;

	if (n < 2 || n>9)
	{
		cout << "invalid input.";
		return 0;
	}

	for (int i = 1; i <= n; i++)
	{
		int blankSpaces = n - i;
		for (int j = 0; j < blankSpaces; j++)
		{
			cout << " ";
		}

		int numOfSymbols = 2*i - 1;
		for (int k = 0; k < numOfSymbols; k++)
		{
			cout << s;
		}
		cout << endl;
	}

	for (int i = n - 1; i > 0; i--)
	{
		int blankSpaces = n - i;
		for (int j = 0; j < blankSpaces; j++)
		{
			cout << " ";
		}

		int numOfSymbols = 2 * i - 1;
		for (int k = 0; k < numOfSymbols; k++)
		{
			cout << s;
		}
		cout << endl;
	}
}
