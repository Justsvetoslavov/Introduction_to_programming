#include <cstddef>
#include <iostream>

std::size_t GetCharOccurrencesCount(const char* text, char symbol) {
    std::size_t count = 0;

    for (std::size_t i = 0; text[i] != '\0'; i++) {
        if (text[i] == symbol) {
            count++;
        }
    }

    return count;
}

int main() {
    std::cout << GetCharOccurrencesCount("aabbabc", 'a') << std::endl; // 3
    std::cout << GetCharOccurrencesCount("Hello", 'z') << std::endl;   // 0

    return 0;
}
