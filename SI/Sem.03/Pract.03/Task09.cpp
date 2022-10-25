#include <iostream>
int main() {
    int num = 0, sum = 2, prevNum1 = 1, prevNum2 = 1;
    std::cin >> num;
    if (num > 3) {
        while (true) {
            if (prevNum1 >= num)break;
            std::cout << prevNum1 << " ";
            if (prevNum2 >= num) break;
            std::cout << prevNum2 << " ";
            sum = prevNum1 + prevNum2;
            prevNum1 = sum;
            prevNum2 = prevNum2 + sum;
        }
        std::cout << std::endl;
    }
    return 0;
}