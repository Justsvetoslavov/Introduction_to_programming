#include <iostream>
using namespace std;
int main()
{
	cout << "enter a number" << endl;
	int n;
	cin >> n;

	int n_copy = n;
	int n_len = 0;
	while (n_copy != 0) {
		n_copy /= 10;
		n_len++;
	}

	if (n_len <= 2) {
		cout << "0, 1";
		return 0;
	}
	// probably bad code, but it works
	int n2;
	// if length is 10, then n2 are the last 4 digits
		n_copy = n;
		for (int i = 0; i < n_len/2 - 1; i++) {
			n_copy /= 10;
		}
		if (n_len % 2 == 1) {
			n_copy /= 10;
		}
		for (int i = 0; i < n_len/2 - 1; i++) {
			n_copy *= 10;
		}
		if (n_len % 2 == 1) {
			n_copy *= 10;
		}
		n2 = n - n_copy;
		
		n_copy = n;
		for (int i = 0; i < n_len / 2 + 1; i++) {
			n_copy /= 10;
		}
		for (int i = 0; i < n_len / 2 - 1; i++) {
			n_copy *= 10;
		}
		if (n_len % 2 == 1) {
			n_copy *= 10;
		}
		//n_copy is now n, but the last 4 digits are 0 instead of
		//their usual values and the middle digits are removed
		//(Ex. 1234567890 -> 12340000)
		//(assuming n_len=10)
		n_copy += n2;
		cout << n_copy << ", " << (n_copy+1);
}