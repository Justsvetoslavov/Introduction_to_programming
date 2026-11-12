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

    // The pointers were reseated. a is still 5 and b is still 10.
    std::cout << *pa << " " << *pb << '\n'; // 10 5
    std::cout << a << " " << b << '\n';     // 5 10
    return 0;
}
