#include <iostream>

int main() {
	const int MAX_LENGTH = 100;
	int arr[MAX_LENGTH];
	
	std::cout << "enter number:" << std::endl;
	int n;
	std::cin >> n;

	int ind = 0;
	while (n > 0) {
		arr[ind] = n % 2;
		n /= 2;
		ind++;
	}

	std::cout << "binary:" << std::endl;
	for (int i = ind - 1; i >= 0; i--) {
		std::cout << arr[i];
	}
}