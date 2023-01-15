#include <iostream>

const int MAX_SIZE = 5;

// is in matrix
bool isValidPosition(int i, int j) {
	return 0 <= i && i < MAX_SIZE && 0 <= j && j < MAX_SIZE;
}

// Implementing a backtracking solution
// currentI, currentJ - our current position
// destinationI, destinationJ - where we want to reach
bool hasPath(
	int matrix[][MAX_SIZE],
	int currentI,
	int currentJ,
	int destinationI,
	int destinationJ
) {
    // if position is not in matrix - return false
	if (!isValidPosition(currentI, currentJ)) {
		return false;
	}

    // if have reached a fence or we have already been here return false
	if (matrix[currentI][currentJ] == 1 || matrix[currentI][currentJ] == 2) {
		return false;
	}

    // if we have reached our destination return true
	if (currentI == destinationI && currentJ == destinationJ) {
		return true;
	}
	
    // mark current position as part of our path
	matrix[currentI][currentJ] = 2;

    // get the result from the surrounding squares
    // if one of them reaches the end => result will be true
    // and our current position is part of the path to the end
	bool result =
		hasPath(matrix, currentI - 1, currentJ, destinationI, destinationJ) ||
		hasPath(matrix, currentI + 1, currentJ, destinationI, destinationJ) ||
		hasPath(matrix, currentI, currentJ + 1, destinationI, destinationJ) ||
		hasPath(matrix, currentI, currentJ - 1, destinationI, destinationJ);

    // if any of our surrounding calls have not reached the end
    // mark our current position as free again
	if (!result) {
		matrix[currentI][currentJ] = 0;
	}

    // return the result to the upper call
	return result;
}

int main() {
    // 0 - free, we can go there
    // 1 - fence, we can not go there
    // 2 - included in our path for reaching the end(we have already been there)
	int matrix[MAX_SIZE][MAX_SIZE] = {
		{ 0, 1, 0, 0, 0},
		{ 0, 0, 0, 1, 0},
		{ 0, 1, 0, 1, 0},
		{ 0, 1, 0, 1, 0},
		{ 0, 1, 0, 0, 0},
	};

	bool result = hasPath(matrix, 4, 0, 4, 4);
	// put debugger here to check the matrix
	std::cout << result;

	return 0;
}
