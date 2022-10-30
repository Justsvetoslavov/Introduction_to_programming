#include <iostream>
using namespace std;

bool isInInterval(int num, int from, int to)
{
	return (num >= from && num <= to);
}

int askUser(int from, int to)
{
	int num;

	do
	{
		cout << "Enter a number until it is in the interval: ";

		cin >> num;
	} while (!isInInterval(num, from, to));

	return num;
}

int main()
{
	int from, to;

	cout << "Enter 2 numbers - first is beginning, second is end of interval: ";

	cin >> from >> to;

	cout << "Final result: " << askUser(from, to);

	return 0;
}