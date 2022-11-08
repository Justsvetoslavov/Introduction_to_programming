#include <iostream>

int main() {
	const int MAX_LENGTH = 100;
	int arr[MAX_LENGTH];
	int arr1[MAX_LENGTH];

	std::cout << "enter size of first array (<=" << MAX_LENGTH << "):" << std::endl;
	int n;
	std::cin >> n;
	if (n > MAX_LENGTH) {
		std::cout << "size must be <=" << MAX_LENGTH << std::endl;
		return 0;
	}
	std::cout << "enter elements(sorted):" << std::endl;
	for (int i = 0; i < n; i++) {
		int element;
		std::cin >> element;
		arr[i] = element;
	}

	std::cout << "enter size of second array (<=" << MAX_LENGTH << "):" << std::endl;
	int m;
	std::cin >> m;
	if (m > MAX_LENGTH) {
		std::cout << "size must be <=" << MAX_LENGTH << std::endl;
		return 0;
	}
	std::cout << "enter elements(sorted):" << std::endl;
	for (int i = 0; i < m; i++) {
		int element;
		std::cin >> element;
		arr1[i] = element;
	}

	std::cout << "common elements:" << std::endl;


	if (!(arr[0] <= arr1[m - 1] && arr[n-1]>=arr1[0])) { // no possible common elements
		std::cout << "empty set." << std::endl;
		return 0;
	}

	bool check = false;
	//loops through interval of possible common elements
	for (int i = arr[0]; i <= arr1[m - 1]; i++) {
		//checks if i is in first array and if it is, check = true
		for (int j = 0; j < n; j++) {
			if (arr[j] == i) {
				check = true;
				break;
			}
		}
		//if i is in second array and if check == true, prints element
		for (int j = 0; j < m; j++) {
			if (arr1[j] == i && check) {
				std::cout << i << " ";
				break;
			}
		}
		check = false;
	}
}