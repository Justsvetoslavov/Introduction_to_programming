// ============================================================================
//  SUMMARY OF THE ALGORITHM
// ----------------------------------------------------------------------------
//  Goal:
//      Determine whether a non-negative integer N contains K as a contiguous
//      block of digits strictly inside N, i.e.:
//              N = A ∘ K ∘ B    with A > 0 and B > 0.
//
//  Constraints:
//      • N and K have up to ~18 digits
//      • No arrays, no strings, no STL
//
//  Idea:
//      1. Count the number of digits in N and K.
//      2. If N is too short to contain A + K + B, return false.
//         (i.e., lenN < lenK + 2 → no room for both sides)
//      3. Precompute P = 10^(lenK). This allows extraction of blocks of lenK digits.
//      4. Slide a window of width lenK digits across N from right to left.
//         For each position:
//             • Extract last lenK digits:   part = temp % P
//             • Check whether part == K.
//             • Check that digits exist on both sides:
//                   leftExists  = (startIndex > 0)
//                   rightExists = (pos > 0)
//      5. If K is found and both sides have digits → return true.
//      6. If no valid position found → return false.
//
//  Notes:
//      - All operations are purely arithmetic (division/modulo).
//      - temp is N shifted right one digit per iteration.
// ============================================================================

#include <iostream>
using namespace std;

// Count the number of digits in a non-negative integer
unsigned countDigits(unsigned long long n) {
	if (n == 0) return 1;           // Special case: 0 has one digit
	unsigned count = 0;
	while (n > 0) {
		count++;                    // Count each digit
		n /= 10;                    // Remove last digit
	}
	return count;
}

// Compute 10^p (used to isolate digit blocks)
unsigned long long powerOf10(unsigned p) {
    unsigned long long result = 1;
    for (unsigned i = 0; i < p; i++) {
        result *= 10;
    }
    return result;
}

// Check if ∃ A,B > 0 such that N = A ∘ K ∘ B
//
// Explanation:
//    We slide a window of length lenK through N (right → left).
//    At each step we extract the last lenK digits of "temp".
//    These correspond to K being placed at some position inside N.
//
//    If those digits equal K, we then check that:
//       • There are digits to the left  → A exists
//       • There are digits to the right → B exists
//
//    The position logic:
//        pos = how many digits are to the RIGHT of the window
//        startIndex = how many digits are to the LEFT of the window
bool existsAandB(unsigned long long N, unsigned long long K) {
	// Early exit: K cannot be inside N if K >= N
	if (K >= N) return false;
	
	unsigned lenN = countDigits(N); // Total digits of N
	unsigned lenK = countDigits(K); // Total digits of K

	// Need at least lenK + 2 digits: one for A, lenK for K, one for B
	if (lenN < lenK + 2) return false;

	unsigned long long powK = powerOf10(lenK);  // Used to extract blocks of lenK digits:  lastBlock = x % powK
	unsigned long long temp = N; // We'll slide a window across N by repeatedly removing the last digit

	// pos = number of digits *to the right* of the current block
	for (unsigned pos = 0; pos <= lenN - lenK; ++pos) {
		unsigned long long part = temp % powK; // Extract the last lenK digits from temp
		if (part == K) { // Check if those digits equal K
			unsigned startIndex = lenN - lenK - pos; // startIndex = digits to the LEFT of this block
			if (startIndex > 0 && pos > 0) { // A must have at least 1 digit AND B must have at least 1 digit
				return true; // Found valid A, K, B
			}
		}
		temp /= 10;  // Shift temp right by 1 digit → move window one digit left
	}

	return false; // K was never found strictly inside N
}

// Wrapper for the task (Optional)
bool task1(unsigned long long N, unsigned long long K) {
    return existsAandB(N, K);
}

int main() {
    cout << "=== Base Examples ===" << endl;
    cout << "N=1234, K=4:    " << (task1(1234, 4) ? "True" : "False") << endl;
    cout << "N=1234, K=2:    " << (task1(1234, 2) ? "True" : "False") << endl;
    cout << "N=1234, K=23:   " << (task1(1234, 23) ? "True" : "False") << endl;
    cout << "N=1002, K=0:    " << (task1(1002, 0) ? "True" : "False") << endl;
    cout << "N=1230, K=0:    " << (task1(1230, 0) ? "True" : "False") << endl;
    cout << "N=10504, K=0:   " << (task1(10504, 0) ? "True" : "False") << endl;
    cout << "N=11111, K=11:  " << (task1(11111, 11) ? "True" : "False") << endl;

    cout << "\n=== Small / Edge Numbers ===" << endl;
    cout << "N=0, K=0:       " << (task1(0, 0) ? "True" : "False") << "  // Too short -> False" << endl;
    cout << "N=5, K=5:       " << (task1(5, 5) ? "True" : "False") << "  // Single-digit N -> False" << endl;
    cout << "N=98, K=9:      " << (task1(98, 9) ? "True" : "False") << "  // K at start -> False" << endl;
    cout << "N=98, K=8:      " << (task1(98, 8) ? "True" : "False") << "  // K at end -> False" << endl;
    cout << "N=981, K=8:     " << (task1(981, 8) ? "True" : "False") << "  // N=9∘8∘1 -> True" << endl;

    cout << "\n=== Larger Numbers ===" << endl;
    cout << "N=123456789012345678, K=3456: "
        << (task1(123456789012345678ULL, 3456) ? "True" : "False") << endl;
    cout << "N=123456789012345678, K=5678: "
        << (task1(123456789012345678ULL, 5678) ? "True" : "False") << endl;
    cout << "N=100000000000000002, K=0: "
        << (task1(100000000000000002ULL, 0) ? "True" : "False") << endl;
    cout << "N=100000000000000000, K=1: "
        << (task1(100000000000000000ULL, 1) ? "True" : "False") << endl;

    cout << "\n=== Repeated Pattern Cases ===" << endl;
    cout << "N=505050, K=0:  " << (task1(505050, 0) ? "True" : "False") << endl;
    cout << "N=101010, K=10: " << (task1(101010, 10) ? "True" : "False") << endl;
    cout << "N=9090909, K=90: " << (task1(9090909, 90) ? "True" : "False") << endl;

    return 0;
}
