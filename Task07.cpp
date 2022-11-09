#include <iostream>

void initializeMatrix(int *a, int size) {
    std::cout << "Please fill in your matrix" << std::endl;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++){
        std::cin >> *(a + i * size + j);
    }
    }
}

void printMatrix(int* a, int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            std::cout << *(a + i * size + j) << " ";
        }
        std::cout << std::endl;
    }
}

void transformMatrix(int* a, int* b, int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            *(b + j * size + i) = *(a + i * size + j);
        }
    }
}

int main() {
    const int SIZE = 4;
    int matrix[SIZE][SIZE];

    initializeMatrix((int*)matrix, SIZE);
    std::cout << "Your matrix:" << std::endl;
    printMatrix((int*) matrix, SIZE);

    std::cout << std::endl;

    int transMatrix[SIZE][SIZE];

    transformMatrix((int*) matrix, (int*) transMatrix, SIZE);
    
    std::cout << "Transpositioned matrix:" << std::endl;
    printMatrix((int*) transMatrix, SIZE);
    return 0;
}