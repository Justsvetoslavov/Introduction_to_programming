#include <iostream>

using namespace std;

int main()
{
	int n;
	char s;
	cin >> n >> s;
	if (n < 2 || n > 9)
	{
		cout << "n must be between 2 and 9";
	}
	else
	{
		// row 1 - 5
		for (int i = 0; i < n ; i++)
		{
			for(int j = 1; j <= n-(i + 1); j++)
			{ 
				cout << ' ';
			}
			for (int k = 1; k <= (2 * i + 1); k++)
			{
				cout << s;
			}
			cout << endl;
		}
		// row 6 - 9
		for (int i = n - 1; i > 0; i--)
		{
			for (int j = n - i; j >= 1; j--)
			{
				cout << ' ';
			}
			for (int k = 1; k <= (2 * i - 1); k++)
			{
				cout << s;
			}
			cout << endl;
		}
	}
}