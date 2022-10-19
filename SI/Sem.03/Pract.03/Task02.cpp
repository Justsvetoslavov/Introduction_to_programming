#include <iostream>
using namespace std;

int main()
{
	int n, x = 1, y;
	cout << "Enter a positive number: ";
	cin >> n;
	y = n - 1;
	do
	{
		cout << "x = " << x << " y = " << y << endl;
		x++;
		y--;
		n--;
	} while (n > 1);
}