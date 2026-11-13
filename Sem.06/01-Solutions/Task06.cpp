#include <iostream>

// Prints all primes p with p <= n.
// Input: n (0 <= n <= 1000)
const int MaxN = 1000;

void InitArray(bool* arr, int size, bool value) {
    for (int i = 0; i < size; i++) {
        arr[i] = value;
    }
}

// After the call, isPrime[i] is true exactly when i is prime (0 <= i < size, size >= 1)
void EratosthenesSieve(bool* isPrime, int size) {
    InitArray(isPrime, size, true);
    isPrime[0] = false;
    if (size > 1) {
        isPrime[1] = false;
    }

    // Every composite number below size has a divisor i with i * i < size
    for (int i = 2; i * i < size; i++) {
        if (!isPrime[i]) { // i is already crossed out
            continue;
        }

        // Smaller multiples of i were crossed out by smaller divisors
        for (int j = i * i; j < size; j += i) {
            isPrime[j] = false;
        }
    }
}

void PrintPrimes(const bool* isPrime, int size) {
    for (int i = 0; i < size; i++) {
        if (isPrime[i]) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    bool isPrime[MaxN + 1];

    int n;
    std::cin >> n;

    // Indices 0..n, so the array needs n + 1 elements
    EratosthenesSieve(isPrime, n + 1);
    PrintPrimes(isPrime, n + 1);

    return 0;
}
