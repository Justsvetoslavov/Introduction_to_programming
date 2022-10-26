#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i < n; i++) {
		int x = i;
		int y = n - x;

		cout << "x = " << x << " y = " << y << endl;
	}
}