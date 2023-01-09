#include <iostream>


void reverse_num(unsigned int num) {

    if (num == 0)
    {
        return;
    }
    std::cout << num % 10 << " ";

    return reverse_num(num / 10);
}

int main() {
    
    reverse_num(12345);
    return 0;
}