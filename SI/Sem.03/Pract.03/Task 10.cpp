#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int digitCounter = 1;
	int temporaryN = n;
	while (temporaryN / 10 != 0)
	{
		digitCounter++;
		temporaryN /= 10;
	}
	
	int firstNum = 1;
	int secondNum = 1;
	int digitCounterHalf = digitCounter / 2;

	if (digitCounter % 2 == 0) digitCounterHalf -= 1;
	for (int i = 0; i < digitCounter / 2 + 1; i++)
	{
		firstNum *= 10;
	}
	for (int i = 0; i < digitCounterHalf; i++)
	{
		secondNum *= 10;
	}
	firstNum = n / firstNum;
	secondNum = n % secondNum;

	for (int i = 0; i < digitCounterHalf; i++)
	{
		firstNum *= 10;
	}
	int wantedNumber = firstNum + secondNum;
	cout << wantedNumber << ", " << wantedNumber + 1;
}