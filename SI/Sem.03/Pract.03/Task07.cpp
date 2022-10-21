#include <iostream>;

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n <= 0)
	{
		cout << "n must be larger than 0!";
	}
	else
	{
		int a = 3;
		int b = 4;
		int c = 5;		
		while (c < n)
		{
			cout << a << ' ' << b << ' ' << c << endl;
			a *= 2;
			b *= 2;
			c *= 2;
		}
	}
}