

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int num = n;
	int digitCount = 0;

	while (num != 0)
	{
		num /= 10;
		digitCount++;
	}
	num = n;
	int newNum = 0;

	if (digitCount % 2 == 0)
	{
		int count = 1;
		for (int i = 1; i <= digitCount; i++)
		{
			if (i == digitCount / 2 || i == digitCount / 2 + 1)
			{
				n /= 10;
				continue;
			}
			newNum = count * (n % 10) + newNum;
			n /= 10;
			count *= 10;
		}
	}
	else
	{
		int count = 1;
		for (int i = 1; i <= digitCount; i++)
		{
			if (i == digitCount / 2 + 1)
			{
				n /= 10;
				continue;
			}
			newNum = count * (n % 10) + newNum;
			n /= 10;
			count *= 10;
		}
	}
	cout << newNum << ", " << newNum + 1;
}

