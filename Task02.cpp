#include <iostream>

void printOutText(int beg, int end, char text[1024]) {
    for(int i = beg; i <= end; i++) {
        if(text[i] == '\0') break;
        std::cout << text[i];
    }
    std::cout << std::endl;
}

int main() {
    int beg, end;
    std::cin >> beg >> end;
    if(beg > end) std::cout << "";
    else {
        char text[1024];
        std::cin >> text;
        printOutText(beg, end, text);
    }
}