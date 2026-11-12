#include <iostream>
#include <limits>

int AskUser(int from, int to) {
    if (from > to) {
        const int temp = from;
        from = to;
        to = temp;
    }

    int number = 0;

    while (true) {
        std::cout << "Enter a number in [" << from << ", " << to << "]: ";
        if (!(std::cin >> number)) {
            if (std::cin.eof()) {
                return 0;
            }
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (number >= from && number <= to) {
            return number;
        }
    }
}

int main() {
    const int number = AskUser(1, 10);
    if (!std::cin) {
        std::cout << "Invalid input\n";
        return 1;
    }

    std::cout << number << '\n';
    return 0;
}
