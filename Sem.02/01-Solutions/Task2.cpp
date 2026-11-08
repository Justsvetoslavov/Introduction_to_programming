#include <iostream>

int main() {
    double speed;
    std::cin >> speed;

    if (speed <= 10) {
        std::cout << "Slow" << std::endl;
    } else if (speed < 50) {
        std::cout << "Average" << std::endl;
    } else if (speed < 150) {
        std::cout << "Fast" << std::endl;
    } else if (speed < 1000) {
        std::cout << "Ultra fast" << std::endl;
    } else {
        std::cout << "Extremely fast" << std::endl;
    }

    return 0;
}
