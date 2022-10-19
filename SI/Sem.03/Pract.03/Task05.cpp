#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "enter initial number" << endl;
	cin >> n;
	int cur = -1;
	int guesses = 0;
	while (true) {
		cout << "guess" << endl;
		cin >> cur;
		guesses++;
		if (cur < n) {
			cout << "too low" << endl;
		}
		else if (cur > n) {
			cout << "too high" << endl;
		}
		else {
			cout << "correct!" << endl;
			cout << guesses << " guesses." << endl;
			break;
		}
	}
}