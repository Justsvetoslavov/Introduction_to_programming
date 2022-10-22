#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cout << "Вход: ";
	cin >> a >> b;
	int maxNum = max(a, b);
	int minNum = min(a, b);
	cout << "Изход: ";
	for (int i = minNum; i <= maxNum; i++)
	{
		bool isPrime = true;
		int n = i;
		for (int j = 2; j <= n / 2; j++)
		{
			if (n % j == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime && n != 1)
		{
			cout << n << ' ';
		}
	}
}