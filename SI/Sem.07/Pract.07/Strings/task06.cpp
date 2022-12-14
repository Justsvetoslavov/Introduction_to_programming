#include <iostream>

const int MAX_SIZE = 1024;

void findMaxPrefix(const char *first, const char *second, const char *third, char *result) {
    int index = 0;
    while(first[index] == second[index] && second[index] == third[index]) {
        index++;
    }
    for(int i = 0; i < index; i++) {
        result[i] = first[i];
    }
    result[index] = '\0';
}

int main() {
    char first[MAX_SIZE], second[MAX_SIZE], third[MAX_SIZE];
    std::cin.getline(first, MAX_SIZE);
    std::cin.getline(second, MAX_SIZE);
    std::cin.getline(third, MAX_SIZE);

    char result[MAX_SIZE];
    findMaxPrefix(first, second, third, result);
    std::cout << result << std::endl;

    return 0;
}