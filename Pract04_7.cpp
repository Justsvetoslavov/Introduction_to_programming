using namespace std;
#include <iostream>;

bool betweenTwoNumbers(int start, int end, int num)
{
	if (num > start && num < end)
	{
		return true;
	}
	return false;
}

int askUser(int from, int to)
{
	int input;
	do
	{
		cout << "Enter a number in the given interval: ";
		cin >> input;
	} while (input < from || input > to);
	return input;
}

int main()
{
	cout << boolalpha << betweenTwoNumbers(2, 60, 10) << endl;
	int number = askUser(3, 50);
	cout << "The number is " << number << endl;
}