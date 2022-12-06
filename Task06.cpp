#include <iostream>

void printOutLongestPrefix(char text1[1024], char text2[1024], char text3[1024]) {
    int index = 0;
    while(text1[index] != '\0' && text2[index] != '\0' && text3[index] != '\0') {
        if(text1[index] == text2[index] && text2[index] == text3[index]) {
            std::cout << text1[index];
        } else break;
        index++;
    }
    std::cout << std::endl;
}

int main() {
    char text1[1024], text2[1024], text3[1024];
    std::cin >> text1 >> text2 >> text3;
    printOutLongestPrefix(text1, text2, text3);
}
