#include <iostream>
using namespace std;

// Checks if a given number is prime.
// Returns true if x is prime, false otherwise.
bool isPrime(int x) {
    // Numbers less than 2 are not prime
    if (x < 2) {
        return false;
    }
    
    // Check divisibility from 2 to sqrt(x)
    // If x has a divisor, it must have one <= sqrt(x)
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false; // Found a divisor, not prime
        }
    }
    
    return true; // No divisors found, x is prime
}

// Prints the appropriate symbol for a number based on the task rules (in order):
// 1. If divisible by both 2 and 5 -> ^
// 2. If divisible only by 2       -> *
// 3. If divisible only by 5       -> $
// 4. If prime                     -> the number itself
// 5. Otherwise                    -> ?
// Parameter: x - the number to process.
void printSymbol(int x) {
    // Rule 1: Check if divisible by both 2 AND 5 (i.e., divisible by 10)
    if (x % 2 == 0 && x % 5 == 0) {
        cout << "^";
    }
    // Rule 2: Check if divisible only by 2 (not by 5)
    else if (x % 2 == 0) {
        cout << "*";
    }
    // Rule 3: Check if divisible only by 5 (not by 2)
    else if (x % 5 == 0) {
        cout << "$";
    }
    // Rule 4: Check if the number is prime
    else if (isPrime(x)) {
        cout << x;
    }
    // Rule 5: All other cases
    else {
        cout << "?";
    }
}

// Generates and prints the transformed sequence.
// Base sequence: 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, ... (number k appears k times).
// Prints first n elements using symbol rules defined in printSymbol.
int main() {
    int n;
    cin >> n; // Read how many elements to print
    
    int printed = 0;  // Counter for how many elements we've printed so far
    int current = 1;  // The current number in the sequence (starts at 1)
    
    // Loop until we've printed exactly n elements
    while (printed < n) {
        // Print the current number 'current' times (or until we reach n)
        for (int i = 0; i < current && printed < n; i++) {
            // Print space before element (except for the first one)
            if (printed > 0) {
                cout << " ";
            }
            
            // Print the symbol for the current number
            printSymbol(current);
            
            // Increment the counter of printed elements
            printed++;
        }
        
        // Advance to next number in the base sequence
        current++;
    }
    
    return 0;
}