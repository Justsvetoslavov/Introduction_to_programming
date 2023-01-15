#include <iostream>

typedef int num;

typedef num (*next) (num);

int increment1(int n) {
	return n + 1;
}

int multiply2(int n) {
	return n * 2;
}

double sumFunc(int n, double (*func) (double), next nextI) {
	double sum = 0;
	for (int i = 1; i <= n; i = nextI(i)) {
		sum += func(i);
	}
	return sum;
}

int main() {

	num i = 1;

	// example for lambda
	std::cout << sumFunc(16, sqrt, [](int n) { return n + 1; }) << std::endl;
	
	std::cout << sumFunc(16, sqrt, multiply2) << std::endl;
	std::cout << sumFunc(16, sin, multiply2) << std::endl;

	int (*funcPointer) (int) = increment1;

	std::cout << increment1(4) << std::endl;
	std::cout << funcPointer(4) << std::endl;
	std::cout << (*funcPointer)(4) << std::endl;

	std::cout << *(*funcPointer) << std::endl;
	std::cout << *funcPointer << std::endl;

	return 0;
}