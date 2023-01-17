// Credits for example to Elena Tuparova

#include <iostream>

typedef int num;
typedef num (*next) (num);

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
	
	std::cout << sumFunc(16, sin, multiply2) << std::endl;
	std::cout << sumFunc(16, sqrt, [](int n){ return n + 1; }) << std::endl;// example for lambda

	return 0;
}