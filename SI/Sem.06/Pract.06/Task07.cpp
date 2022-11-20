#include <iostream>
const int SIZE = 5;
// Here, I've used the internet to find the solution
// But It's difficult to comprehend how it is working and I don't understand generally

void printSetsWithThreeDigits(int* array) {
    int count = std::pow(2, SIZE);
    for (int i = 0; i < count; i++) {
        std::cout << "[";
        for (int j = 0; j < SIZE; j++) {
            if ((i & (1 << j)) != 0) {
                std::cout << array[j] << " ";
            }
        }
        std::cout << "]" << std::endl;
    }

}

void fillArray2(int* array) {
    for (int i = 0; i < SIZE; i++) {
        std::cin >> array[i];
    }
}


int main7()
{
    int array[SIZE];
    fillArray2(array);
    printSetsWithThreeDigits(array);


    return 0;
}