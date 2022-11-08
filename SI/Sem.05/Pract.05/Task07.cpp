#include <iostream>

int main() {
	const int MAX_LENGTH = 100;
	int arr[MAX_LENGTH][MAX_LENGTH];
	std::cout << "enter row and col count (<=" << MAX_LENGTH << "):" << std::endl;
	int row,col;
	std::cin >> row >> col;
	if (row > MAX_LENGTH || col > MAX_LENGTH) {
		std::cout << "size must be <=" << MAX_LENGTH << std::endl;
		return 0;
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			std::cout << "enter element " << i << ";" << j << std::endl;
			int element;
			std::cin >> element;
			arr[i][j] = element;
		}
	}
	//print input
	std::cout << "original matrix:" << std::endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	//transpose
	for (int i = 0; i < row; i++) {
		for (int j = i + 1; j < col; j++) {
			int cur = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = cur;
		}
	}
	//print transposed
	std::cout << "transposed matrix:" << std::endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}