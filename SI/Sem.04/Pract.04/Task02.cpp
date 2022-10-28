#include <iostream>

bool isEven(int n) {
	if (n % 2 == 0) {
		return true;
	}
	return false;
}
int main() {
	int n;
	std::cout << "number:" << std::endl;
	std::cin >> n;
	std::cout << std::boolalpha << isEven(n);
}