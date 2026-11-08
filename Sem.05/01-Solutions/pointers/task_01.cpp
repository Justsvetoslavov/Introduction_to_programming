#include <iostream>

void SwapPointers(int** p1, int** p2) {
    int* temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int a = 5, b = 10;
    int* pa = &a;
    int* pb = &b;

    SwapPointers(&pa, &pb);

    std::cout << *pa << " " << *pb << std::endl; // 10 5
    return 0;
}
