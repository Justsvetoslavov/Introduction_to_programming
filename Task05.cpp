

#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	if (num < 0 || num>100)
	{
		cout << "Invalid input.";
		return 0;
	}

	int newNum;
	cin >> newNum;

	while (newNum!=num)
	{
		if (newNum>num)
		{
			cout << newNum << " is bigger than " << num;
		}

		cin >> newNum;
	}
}


