#include <iostream>

int main() {
	const int MAX_LENGTH = 100;
	int arr[MAX_LENGTH];
	std::cout << "enter size (<=" <<MAX_LENGTH << "):" << std::endl;
	int n;
	std::cin >> n;
	if (n > MAX_LENGTH) {
		std::cout << "size must be <=" << MAX_LENGTH << std::endl;
		return 0;
	}
	std::cout << "enter elements:" << std::endl;
	for (int i = 0; i < n; i++) {
		int element;
		std::cin >> element;
		arr[i] = element;
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] == arr[j]) {
				std::cout << "number is " <<arr[i] << std::endl;
				return 0;
			}
		}
	}
}