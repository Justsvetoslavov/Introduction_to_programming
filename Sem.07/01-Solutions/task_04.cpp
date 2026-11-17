#include <cstddef>
#include <iostream>

std::size_t MyStrLen(const char* str) {
    std::size_t length = 0;

    while (str[length] != '\0') {
        length++;
    }

    return length;
}

void MyStrCpy(char* dest, const char* source) {
    std::size_t i = 0;

    while (source[i] != '\0') {
        dest[i] = source[i];
        i++;
    }

    dest[i] = '\0';
}

// Version 1: appends source to the end of dest, as std::strcat does.
// dest must have room for the length of dest + the length of source + 1 characters.
void MyStrCat(char* dest, const char* source) {
    std::size_t destIndex = MyStrLen(dest);
    std::size_t sourceIndex = 0;

    while (source[sourceIndex] != '\0') {
        dest[destIndex] = source[sourceIndex];
        destIndex++;
        sourceIndex++;
    }

    dest[destIndex] = '\0';
}

// Version 2: the same as version 1, but reuses MyStrCpy.
// dest + MyStrLen(dest) points to the '\0' of dest, so the copy starts there.
void MyStrCatWithCopy(char* dest, const char* source) {
    MyStrCpy(dest + MyStrLen(dest), source);
}

// Version 3: writes first followed by second into result and leaves both unchanged.
// result must have room for the length of first + the length of second + 1 characters.
void Concatenate(const char* first, const char* second, char* result) {
    MyStrCpy(result, first);
    MyStrCpy(result + MyStrLen(first), second);
}

int main() {
    char greeting[100] = "Hello";

    MyStrCat(greeting, ", ");
    MyStrCatWithCopy(greeting, "World");
    std::cout << greeting << std::endl; // Hello, World

    char result[100];
    Concatenate("C", "++", result);
    std::cout << result << std::endl; // C++

    return 0;
}
