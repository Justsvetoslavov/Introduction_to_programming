#include <iostream>

bool isPowerOfTwo(int n) {
	while (n != 0) {
		if (n == 1) {
			return true;
		}
		if (n % 2 == 1) {
			return false;
		}
		n /= 2;
	}
	return false;
}
int nearestPowerOfTwo(int n) {
	int left = n;
	while (!isPowerOfTwo(left)) {
		left--;
	}
	int right = n;
	while (!isPowerOfTwo(right)) {
		right++;
	}

	if (n - left <= right - n) {
		return left;
	}
	return right;
}
int main() {
	int n;
	do {
		std::cout << "enter number" << std::endl;
		std::cin >> n;
	} while (n < 100 || n >100000);

	std::cout << "nearest power of two: " << nearestPowerOfTwo(n) << std::endl;
}