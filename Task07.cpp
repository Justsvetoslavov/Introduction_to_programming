#include <iostream>

int lexicographicalComparison(char text1[1024], char text2[1024]) {
    int index = 0;
    while(text1[index] != 0 && text2[index] != 0) {
        if(text1[index] > text2[index]) {
            return 1;
            break;
        }
        if(text1[index] < text2[index]) {
            return -1;
            break;
        }
        index++;
    }
    if(text1[index] != '\0') return 1;
    if(text2[index] != '\0') return -1;
    return 0;
}

int main() {
    char text1[1024], text2[1024];
    std::cin >> text1 >> text2;
    std::cout << lexicographicalComparison(text1, text2);
}