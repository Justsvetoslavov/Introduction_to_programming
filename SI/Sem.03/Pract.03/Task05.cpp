#include <iostream>

using namespace std;

int main()
{
	int num = 0;
	cout << "Enter a number: ";
	cin >> num;
	if (num < 0 || num > 100)
	{
		cout << "the number must be between 0 and 100";
	}
	else
	{
		int counter = 0;
		while (true)
		{
			int guess = 0;
			cin >> guess;
			if (guess < num)
			{
				cout << "the number is larger!" << endl;
				counter++;
			}
			else if (guess > num)
			{
				cout << "the number is smaller!" << endl;
				counter++;
			}
			else
			{
				cout << "you guessed the number!" << endl;
				counter++;
				break;
			}

		}
		cout << "total attempts: " << counter;
	}
}