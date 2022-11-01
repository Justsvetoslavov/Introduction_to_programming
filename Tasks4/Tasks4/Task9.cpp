#include <iostream>

int calculate(int a, int b, char action = '+') {

	int result;

	switch (action) {

	case'+': result = a + b; break;
	case '-': result = a - b; break;
	case '*': result = a * b; break;
	case '/': result = a / b; break;

	}
	return (result);
}