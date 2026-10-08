// Задача 3 - примерно решение 1
#include <iostream>
using namespace std;

int** rotate(int** original, int size) {
    int** rotated = new int*[size];
    for (int row = 0; row < size; ++row) {
        rotated[row] = new int[size];
    }

    for (int row = 0; row < size; ++row) {
        for (int col = 0; col < size; ++col) {
            rotated[row][col] = original[size - 1 - col][row];
        }
    }

    return rotated;
}

void freeMatrix(int** matrix, int size) {
    for (int row = 0; row < size; ++row) {
        delete[] matrix[row];
    }
    delete[] matrix;
}

int main() {
    int size;
    cin >> size;

    int** original = new int*[size];
    for (int row = 0; row < size; ++row) {
        original[row] = new int[size];
        for (int col = 0; col < size; ++col) {
            cin >> original[row][col];
        }
    }

    int** rotated = rotate(original, size);

    for (int row = 0; row < size; ++row) {
        for (int col = 0; col < size; ++col) {
            cout << rotated[row][col];
            if (col + 1 < size) {
                cout << ' ';
            }
        }
        cout << '\n';
    }

    freeMatrix(original, size);
    freeMatrix(rotated, size);
    return 0;
}
