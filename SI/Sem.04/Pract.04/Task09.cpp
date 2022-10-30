#include <iostream>
using namespace std;

int calculate(int a, int b, char action) {
	switch (action) {
	case '%': return a % b;
	case '-': return a - b;
	case '*': return a * b;
	case '/':
		if (b == 0) {
			return -1;
		}
		else {
			return a / b;
		}
	default: return a + b;
	}
}

int main() {
	int a, b;
	char action;
	cin >> a >> b >> action;
	cout << calculate(a, b, action);
	return 0;
}