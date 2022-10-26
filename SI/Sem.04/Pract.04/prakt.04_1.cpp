#include<iostream>
using namespace std;

int sum(int a, int b) {
	return a + b;
}

void isEven(int num) {
	if (num % 2 == 0)
		cout << "Even";
	else
		cout << "Odd";
}

void isPositive(int num) {
	if (num > 0) {
		cout << num << " is positive.";
	}
	else
		cout << num << " is not positive.";
}

void isNegative(int num) {
	if (num < 0) {
		cout << num << " is negative.";
	}
	else
		cout << num << " is not negative.";
}



int main() {

	return 0;
}