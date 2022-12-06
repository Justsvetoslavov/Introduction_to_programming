#include <iostream>

bool equals(char text[1024], char subText[1024], int start, int length) {
        for(int i = 0; i < length; i++) {
            if(text[start + i] != subText[i]) return false;
        }
        return true;
}

int count(char text[1024], char subText[1024]) {
    int subLength = 0;
    while(subText[subLength] != '\0') subLength++;
    int counter = 0, index = 0;
    while(text[index + subLength] != '\0') {
        if(equals(text, subText, index, subLength)) counter++;
        index++;
    }
    return counter;
}

int main() {
    char text[1024], subText[1024];
    std::cin >> text >> subText;
    std::cout << count(text, subText) << std::endl;
}