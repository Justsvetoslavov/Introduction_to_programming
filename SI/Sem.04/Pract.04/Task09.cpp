#include <iostream>
using namespace std;

int calculate(int a, int b, char action) {
	switch (action) {
		case '%': return a % b;
		case '-': return a - b;
		case '*': return a * b;
		case '/': return a / b;
		default: return a + b;
	}
}

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    cout << calculate(a, b);
    return 0;
}