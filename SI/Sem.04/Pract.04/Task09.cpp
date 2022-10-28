#include <iostream>

int calculate(int a, int b, char action) {
	switch (action) {
	case '-':
		return a - b;
		break;
	case '*':
		return a * b;
		break;
	case '/':
		return a / b;
		break;
	case '%':
		return a % b;
		break;
	default:
		return a + b;
		break;
	}
}
int main() {
	std::cout << "enter a,b,action: " << std::endl;
	int a, b;
	char action;
	std::cin >> a >> b >> action;
	std::cout << calculate(a, b, action);
}