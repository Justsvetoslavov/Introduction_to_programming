#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Вход: ";
	cin >> n;
	if (n > 3)
	{
		int num1 = 1;
		int num2 = 1;
		cout << "Изход: " << num1 << ' ' << num2 << ' ';
		int nextNum = 0;
		for (int i = 1; ; i++)
		{
			nextNum = num1 + num2;
			if (nextNum > n)
			{
				break;
			}
			else
			{
				cout << nextNum << ' ';
				num1 = num2;
				num2 = nextNum;
			}
		}
	}
	else
	{
		cout << "n must be larger than 3";
		return 1;
	}
}