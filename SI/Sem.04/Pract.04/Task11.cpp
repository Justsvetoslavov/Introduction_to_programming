#include <iostream>

int min(int a, int b) {
	return (a < b) ? a : b;
}
int min(int a, int b, int c, int d) {
	return min(min(a, b), min(c, d));
}
int gcd(int a, int b) {
	int highest = 1;
	for (int i = 2; i <= min(a,b); i++) {
		if (a % i == 0 && b % i == 0) {
			highest = i;
		}
	}
	return highest;
}
int gcd(int a, int b, int c, int d) {
	int highest = 1;
	for (int i = 2; i <= min(a, b, c, d); i++) {
		if (a % i == 0 && b % i == 0 && c % i == 0 && d % i == 0) {
			highest = i;
		}
	}
	return highest;
}
int main() {
	std::cout << "enter a,b,c,d: " << std::endl;
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	std::cout << "gcd of a,b: " << gcd(a, b) << std::endl;
	std::cout << "gcd of c,d: " << gcd(c, d) << std::endl;
	std::cout << "gcd of a,b,c,d: " << gcd(a, b, c, d) << std::endl;
}