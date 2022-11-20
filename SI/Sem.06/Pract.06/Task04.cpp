#include <iostream>

int findEncoded(int number, int countLastDigits) {
    int imitateBinary = 1;
    for (int i = 0; i < countLastDigits - 1; i++) {
        imitateBinary = (imitateBinary << 1) + 1;
    }
    return number & imitateBinary;

}
int main4()
{
    int k, number;
    std::cin >> number >> k;

    std::cout << findEncoded(number, k);

    return 0;
}