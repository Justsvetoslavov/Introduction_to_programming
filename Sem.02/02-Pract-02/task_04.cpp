#include <iostream>

int main() {
    int percentage = 0;
    std::cout << "Result: ";
    std::cin >> percentage;

    if (percentage < 0 || percentage > 100) {
        std::cout << "Invalid result\n";
        return 1;
    }

    std::cout << "Grade: ";

    if (percentage >= 90) {
        std::cout << "6+\n";
    } else if (percentage >= 80) {
        std::cout << "6\n";
    } else if (percentage >= 70) {
        std::cout << "5\n";
    } else if (percentage >= 60) {
        std::cout << "4\n";
    } else if (percentage >= 40) {
        std::cout << "3\n";
    } else {
        std::cout << "2\n";
    }

    return 0;
}
