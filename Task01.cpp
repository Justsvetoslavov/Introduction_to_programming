#include <iostream>

void alterText(char text[1024], char textCopy[1024]) {
    int index = 0, copyIndex = 0;
    while(text[index] != '\0') {
        if(text[index] >= 97 && text[index] <= 122) {
            textCopy[copyIndex] = text[index];
            copyIndex++;
        }
        index++;
    }
    textCopy[copyIndex] = '\0';
}

int main() {
    char text[1024], textCopy[1024];
    std::cin >> text;
    alterText(text, textCopy);
    std::cout << textCopy << std::endl;
}