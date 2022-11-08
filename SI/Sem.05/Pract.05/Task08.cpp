#include <iostream>

int main() {
	const int MAX_LENGTH = 100;
	int arr[MAX_LENGTH][MAX_LENGTH];
	int arr1[MAX_LENGTH][MAX_LENGTH];
	std::cout << "enter size of first matrix:" << std::endl;
	int n, m;
	std::cin >> n >> m;
	if (n > MAX_LENGTH || m > MAX_LENGTH) {
		std::cout << "too big." << std::endl;
		return 0;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cout << "enter element " << i << ";" << j << std::endl;
			int element;
			std::cin >> element;
			arr[i][j] = element;
		}
	}

	std::cout << "enter size of second matrix:" << std::endl;
	int m1, k;
	std::cin >> m1 >> k;
	if (m1 > MAX_LENGTH || k > MAX_LENGTH) {
		std::cout << "too big." << std::endl;
		return 0;
	}
	if (m != m1) {
		std::cout << "cannot multipy." << std::endl;
		return 0;
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			std::cout << "enter element " << i << ";" << j << std::endl;
			int element;
			std::cin >> element;
			arr1[i][j] = element;
		}
	}

	int arr2[MAX_LENGTH][MAX_LENGTH];
	for (int l = 0; l < m; l++) {
		for (int j = 0; j < m; j++) {
			int element = 0;
			for (int i = 0; i < m; i++) {
				element += arr[l][i] * arr1[i][j];
			}
			arr2[l][j] = element;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			std::cout << arr2[i][j] << " ";
		}
		std::cout << std::endl;
	}
}