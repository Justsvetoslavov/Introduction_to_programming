#include <iostream>

void printOutBasis(char text[1024]) {
    int index = 0;
    if(text[index] == '\0') std::cout << "" << std::endl;
    else {
    while(text[index+1] != '\0') {
        int paralellIndex = index + 1;
        while(text[paralellIndex] != '\0') {
            if(text[paralellIndex] == text[index] && text[paralellIndex] != '0') text[paralellIndex] = '0';
            paralellIndex++;
        }
        index++;
    }
    index = 0;
    while(text[index] != '\0') {
        if(text[index] != '0') std::cout << text[index];
        index++;
    }
    std::cout << std::endl;
    }
}

int main() {
    char text[1024];
    std::cin >> text;
    printOutBasis(text);
}