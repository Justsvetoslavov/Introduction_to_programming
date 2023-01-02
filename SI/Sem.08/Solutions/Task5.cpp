int** Transpose(int** matrix, size_t mRows, size_t mCol)
{
	int rows = mRows;
	int columns = mCol;

	int** result = new int*[rows]; //result = transposition of matrix (columnsxrows)

	for (size_t i = 0; i < rows; i++) {
		result[i] = new int[columns];
    }

	for (size_t i = 0; i < rows; i++) {
		for (size_t y = 0; y < columns; y++) {
			result[i][y] = matrix[y][i];
        }
	}

	return result;
}