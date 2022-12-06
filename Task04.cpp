#include <iostream>

void alterText(char text[1024], char x, char a, char b) {
    int index = 0;
    while(text[index] != '\0') {
        if(text[index] == x && index % 2 == 0) text[index] = a;
        else if(text[index] == x && index % 2 != 0) text[index] = b;
        index++; 
    }
}  

int main() {
    char text[1024], x, a, b;
    std::cin >> text >> x >> a >> b;
    alterText(text, x, a, b);
    std::cout << text;
}