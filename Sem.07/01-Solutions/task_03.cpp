#include <cstddef>
#include <iostream>

// Copies source into dest, including the terminating '\0'.
// dest must have room for the length of source + 1 characters.
void MyStrCpy(char* dest, const char* source) {
    std::size_t i = 0;

    while (source[i] != '\0') {
        dest[i] = source[i];
        i++;
    }

    dest[i] = '\0';
}

int main() {
    char dest[100];

    MyStrCpy(dest, "Hello");
    std::cout << dest << std::endl; // Hello

    // The old content is overwritten up to the new '\0'
    MyStrCpy(dest, "Hi");
    std::cout << dest << std::endl; // Hi

    return 0;
}
