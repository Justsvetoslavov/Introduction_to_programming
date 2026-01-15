#include <iostream>

const size_t MAX_SIZE = 8;
const int FREE_VALUE = 0;
const int OCCUPIED_VALUE = 1;
const int MARKED_VALUE = 2;

bool isValidPosition(size_t x, size_t y) {
	return 0 <= x && x < MAX_SIZE && 0 <= y && y < MAX_SIZE;
}

void markArea(int matrix[MAX_SIZE][MAX_SIZE], size_t x, size_t y) {
	if (!isValidPosition(x, y) || matrix[x][y] != FREE_VALUE) {
		return;
	}

	matrix[x][y] = MARKED_VALUE;

	markArea(matrix, x + 1, y);
	markArea(matrix, x - 1, y);
	markArea(matrix, x, y + 1);
	markArea(matrix, x, y - 1);
}

size_t countAreas(int matrix[MAX_SIZE][MAX_SIZE]) {
	size_t result = 0;
	
	for (size_t i = 0; i < MAX_SIZE; i++) {
		for (size_t j = 0; j < MAX_SIZE; j++) {
			if (matrix[i][j] == FREE_VALUE) {
				markArea(matrix, i, j);
				result++;
			}
		}
	}

	return result;
}

int main() {
	// 0 - free
	// 1 - occupied
	// 2 - marked
	int matrix[MAX_SIZE][MAX_SIZE] = {
		{0, 0, 1, 1, 0, 1, 1, 0},
		{0, 0, 1, 0, 0, 1, 0, 0},
		{1, 1, 1, 1, 1, 1, 0, 1},
		{0, 0, 1, 0, 1, 1, 1, 1},
		{1, 0, 1, 1, 1, 1, 0, 1},
		{0, 0, 1, 0, 1, 0, 0, 0},
		{1, 1, 1, 1, 1, 0, 1, 1},
		{0, 0, 0, 0, 1, 0, 0, 0},
	};

	std::cout << countAreas(matrix); // 8
}