#include <iostream>

int AskUser(int from, int to) {
    int number = 0;

    do {
        std::cout << "Enter a number in [" << from << ", " << to << "]: ";
        std::cin >> number;
    } while (std::cin && (number < from || number > to));

    return number;
}

int main() {
    std::cout << AskUser(1, 10) << '\n';

    return 0;
}
