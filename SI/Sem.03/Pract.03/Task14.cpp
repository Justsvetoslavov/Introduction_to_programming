#include <iostream>
using namespace std;
int main()
{
	cout << "coefficients(a,b,c,d,e): " << endl;
	int a,b,c,d,e;
	cin >> a >> b >> c >> d >> e;
	for (int x = -100; x <= 100; x++) {
		int y = a * x * x * x * x + b * x * x * x + c * x * x + d * x + e;
		if (y >= 0) {
			cout << x << " ";
		}
	}
}