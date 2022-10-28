#include <iostream>

int abs(int n) {
	return (n < 0) ? -n : n;
}
double fabs(double n) {
	return (n < DBL_EPSILON) ? -n : n;
}
int main() {
	std::cout << "number for abs: " << std::endl;
	int n;
	std::cin >> n;
	std::cout << "abs: " << abs(n) << std::endl;

	std::cout << "number for fabs: " << std::endl;
	double n1;
	std::cin >> n1;
	std::cout << "fabs: " << fabs(n1) << std::endl;
}