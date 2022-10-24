#include <iostream>

using namespace std;

int main()
{
	signed int n = 0;
	int remainder = 0;
	int reversed = 0;

	cin >> n;

	int square = n * n;

	while (square != 0) {
		remainder = square % 10;
		reversed = reversed * 10 + remainder;
		square /= 10;
	}

	cout << reversed;
}