// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int a, b, k;
    std::cin >> a >> b >> k;
    int n_reverse = 0;
    for (int i = 0; i < k; i++) {
        n_reverse += (a % 10);
        n_reverse *= 10;
        a /= 10;
    }
    n_reverse /= 10;
    int n = 0;
    for (int i = 0; i < k ;i++) {
        n += n_reverse % 10;
        n *= 10;
        n_reverse /= 10;
    }
    n /= 10;
    int b_copy = b;
    int count = 0;
    while(b_copy!=0) {
        count++;
        b_copy /= 10;
    }
    int pow = 1;
    for (int i = 0; i < count;i++) {
        pow *= 10;
    }
    int new_number = n * pow + b;
    std::cout << new_number;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
