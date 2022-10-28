#include <iostream>

bool isPositive(int n) {
	if (n > 0) {
		return true;
	}
	return false;
}
bool isNegative(int n) {
	if (n < 0) {
		return true;
	}
	return false;
}
int main() {
	std::cout << "number:" << std::endl;
	int n;
	std::cin >> n;
	std::cout << "isPositive: " << std::boolalpha << isPositive(n) << std::endl;
	std::cout << "isNegative: " << std::boolalpha << isNegative(n) << std::endl;

}