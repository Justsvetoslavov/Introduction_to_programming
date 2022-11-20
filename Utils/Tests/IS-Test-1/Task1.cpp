#include <iostream>

void PrintPositiveElements(int n) {
    if (n <= 0) {
        std::cout << "Error!\n";
        return;
    }

    int counter = 1, elementCounter = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < counter && elementCounter < n; ++j, ++elementCounter) {
            std::cout << counter << " ";
        }
        counter++;
    }
    std::cout << std::endl;
}