

#include <iostream>
using namespace std;
int main()
{
	double a, b, c, x1, x2, D;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	D = sqrt(b * b - 4 * (a * c));
	if (D > 0)
	{
		x1 = (-b + D) / (2 * a);
		x2 = (-b - D) / (2 * a);
		cout << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
	}
	if (D == 0)
	{
		x1 = -b / (2 * a);
		x2 = x1;
		cout << "x1 = x2 = " << x1 << endl;
	}
	else
	{
		cout << "It has no real solutions";
	}

	return 0;
}

