#include <iostream>

int main() {
    double speed = 0.0;
    std::cin >> speed;

    if (speed <= 10) {
        std::cout << "slow" << std::endl;
    } else if (speed <= 50) {
        std::cout << "average" << std::endl;
    } else if (speed <= 150) {
        std::cout << "fast" << std::endl;
    } else if (speed <= 1000) {
        std::cout << "ultra fast" << std::endl;
    } else {
        std::cout << "extremely fast" << std::endl;
    }

    return 0;
}
