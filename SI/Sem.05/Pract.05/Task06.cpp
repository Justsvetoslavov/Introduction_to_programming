#include <iostream>

int main() {
	const int MAX_LENGTH = 100;
	int arr[MAX_LENGTH];
	std::cout << "enter size (<=" << MAX_LENGTH << "):" << std::endl;
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

	//sort
	int i, j;
	for (i = 0; i < n - 1; i++) { 
		for (j = 0; j < n - i - 1; j++) { 
			if (arr[j] > arr[j + 1]) {
				int cur = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = cur;
			}
		}
	}

	//sort by rule
	for (int i = 1; i < n; i+=2) {
		int cur = arr[i];
		arr[i] = arr[i - 1];
		arr[i - 1] = cur;
	}

	//print
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}
}