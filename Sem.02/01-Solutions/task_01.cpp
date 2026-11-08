#include <iostream>

int main() {
    unsigned int n = 0;
    std::cin >> n;

    if (n < 100) {
        std::cout << "Less than 100" << std::endl;
    } else if (n <= 200) {
        std::cout << "Between 100 and 200" << std::endl;
    } else {
        std::cout << "More than 200" << std::endl;
    }

    return 0;
}
