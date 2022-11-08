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

	//sorts evens first, then odds
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			continue;
		}
		for (int j = i + 1; j < n; j++) {
			if (arr[j] % 2 == 0) {
				int cur = arr[j];
				arr[j] = arr[i];
				arr[i] = cur;
				break;
			}
		}
	}

	//sorts evens in increasing order and odds in decreasing order
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i] && arr[i] % 2 == 0 && arr[j] % 2 == 0) {
				int cur = arr[j];
				arr[j] = arr[i];
				arr[i] = cur;
			}
			if (arr[j] > arr[i] && arr[i] % 2 != 0 && arr[j] % 2 != 0) {
				int cur = arr[j];
				arr[j] = arr[i];
				arr[i] = cur;
			}
		}
	}

	//print
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}

}