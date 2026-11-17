#include <cstddef>
#include <iostream>

bool IsDigit(char symbol) {
    return '0' <= symbol && symbol <= '9';
}

// A valid number is an optional '-' followed by at least one digit and nothing else
bool IsValidNumber(const char* str) {
    std::size_t i = str[0] == '-' ? 1 : 0;

    // At least one digit is required, so "" and "-" are not valid
    if (str[i] == '\0') {
        return false;
    }

    while (str[i] != '\0') {
        if (!IsDigit(str[i])) {
            return false;
        }

        i++;
    }

    return true;
}

// Converts str to an int and returns 0 if str is not a valid number.
// Input limit: the absolute value of the number is at most 2147483647,
// so neither result nor -result overflows an int.
int MyAtoi(const char* str) {
    if (!IsValidNumber(str)) {
        return 0;
    }

    bool isNegative = str[0] == '-';
    std::size_t i = isNegative ? 1 : 0;
    int result = 0;

    while (str[i] != '\0') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return isNegative ? -result : result;
}

int main() {
    std::cout << MyAtoi("123") << std::endl; // 123
    std::cout << MyAtoi("-45") << std::endl; // -45
    std::cout << MyAtoi("007") << std::endl; // 7
    std::cout << MyAtoi("12a") << std::endl; // 0, not a valid number (std::atoi returns 12)
    std::cout << MyAtoi("-") << std::endl;   // 0, not a valid number

    return 0;
}
