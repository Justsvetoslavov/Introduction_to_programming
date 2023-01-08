#include <iostream>

void censor(char text[1024], int begin, int end) {
    for(int i = begin; i <a end; i++) {
        text[i] = '*';
    }
}

bool equals(char text[1024], char subText[1024], int start, int length) {
        for(int i = 0; i < length; i++) {
            if(text[start + i] != subText[i]) return false;
        }
        return true;
}

void alterMainText(char text[1024], char censoredWord[1024]) {
    int index = 0, wordLength = 0;
    while(censoredWord[wordLength] != '\0') wordLength++;

    while(text[index] != '\0') {
        if(equals(text, censoredWord, index, wordLength)) {
            censor(text, index, index + wordLength);
            index += wordLength;
        }
        index++;
    }
}

int main() {
    char text[1024], censoredWord[1024];
    std::cin >> text >> censoredWord;
    alterMainText(text, censoredWord);
    std::cout << text;
}