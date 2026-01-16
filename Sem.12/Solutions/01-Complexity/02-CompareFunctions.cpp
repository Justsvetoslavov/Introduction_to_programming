#include <iostream>
#include <chrono>

void constant(int n) {
    n += 5;
}

void n(int n) {
    int num = 0;
    for (int i = 1; i < n; i++) {
        num++;
    }
}

void logN(int n) {
    int num = 0;
    for (int i = 1; i < n; i *= 2) {
        num++;
    }
}

void nLogN(int n) {
    int num = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j *= 2) {
            num++;
        }
    }
}

void nPow2(int n) {
    int num = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            num++;
        }
    }
}

void measureAndPrint(int n, void(*func)(int)) {
    auto begin = std::chrono::high_resolution_clock::now();
    func(n);
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "n = " << n << ", Time: " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << "ns" << std::endl;
}

void measureAndPrintAll(void(*func)(int)) {
    measureAndPrint(500, func);
    measureAndPrint(5000, func);
    measureAndPrint(50000, func);
    measureAndPrint(500000, func);
    measureAndPrint(5000000, func);
}

int main()
{
    std::cout << "Constant Algo" << std::endl;
    measureAndPrintAll(constant);
    std::cout << "LogN Algo" << std::endl;
    measureAndPrintAll(logN);
    std::cout << std::endl;
    std::cout << "Linear Algo" << std::endl;
    measureAndPrintAll(n);
    std::cout << std::endl;
    std::cout << "NLogN Algo" << std::endl;
    measureAndPrintAll(nLogN);
    std::cout << std::endl;
    std::cout << "N^2 Algo" << std::endl;
    measureAndPrintAll(nPow2);
}