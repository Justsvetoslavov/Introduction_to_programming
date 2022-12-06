#include <iostream>

int countOccurences(char text[1024], char letter) {
    int index = 0, counter = 0;
    while(text[index] != '\0') {
        if(text[index] == letter) counter++;
        index++;
    }
    return counter;
}

int main() {
    char text[1024], letter;
    std::cin >> text >> letter;
    std::cout << countOccurences(text, letter) << std::endl;
}