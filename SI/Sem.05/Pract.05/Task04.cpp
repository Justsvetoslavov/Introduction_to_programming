#include <iostream>

int main() {
	const int MAX_LENGTH = 100;
	int arr[MAX_LENGTH];
	std::cout << "enter number" << std::endl;
	int n;
	std::cin >> n;
	int ind = 0;
	while (n != 0) {
		arr[ind] = n % 10;
		n /= 10;
		ind++;
	}
	for (int i = 0; i < ind / 2; i++) {
		if (arr[i] != arr[ind - i - 1]) {
			std::cout << "not a palindrome." << std::endl;
			return 0;
		} 
	}
	std::cout << "is a palindrome." << std::endl;
}