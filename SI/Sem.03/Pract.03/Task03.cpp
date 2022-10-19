#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;
	if (num <= 0)
	{
		cout << "num must be larger than 0";
	}
	else
	{
		int numSqr = num * num;
		int numSqrLenght = 0;
		int numWhile = numSqr;
		do
		{
			numSqrLenght++;
			numWhile /= 10;

		} while (numWhile != 0);
		for (int i = 0; i < numSqrLenght; i++)
		{
			if (numSqr % 10 != 0)
			{
				cout << numSqr % 10;
			}
			numSqr /= 10;
		}
		
	}
}