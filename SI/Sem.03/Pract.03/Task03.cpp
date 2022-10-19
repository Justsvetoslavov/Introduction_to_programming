#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int n_squared = n * n;
	int a = 0;
	while (n_squared != 0) {
		a *= 10;
		a += n_squared % 10;
		n_squared /= 10;
	}
	cout << a;

}