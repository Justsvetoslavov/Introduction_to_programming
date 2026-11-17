#include <cstddef>
#include <iostream>

// Returns the number of characters before the terminating '\0'
std::size_t MyStrLen(const char* str) {
    std::size_t length = 0;

    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    std::cout << MyStrLen("Hello") << std::endl; // 5
    std::cout << MyStrLen("") << std::endl;      // 0

    char text[100] = "C++";
    std::cout << MyStrLen(text) << std::endl; // 3, although the array has 100 elements

    return 0;
}
