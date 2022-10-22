#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int min = a > b ? b : a;

	for (int i = min; i > 0; i--) {
		if (a % i == 0 && b % i == 0)
			cout << i << " ";
	}

	return 0;
}