#include <iostream>

void toLower(char& a) {
    a += 'a' - 'A';
}

void toUpper(char& a) {
    a += 'A' - 'a';
}



int main() {
    char letterA = 'g', letterB = 'G';
    toUpper(letterA);
    toLower(letterB);
    std::cout << letterA << " " << letterB << std::endl;
    }