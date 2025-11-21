// Variant 2: Determine if N contains K strictly inside (N = A∘K∘B, A>0,B>0)
// by stripping first/last digit to get middle, then scanning for K.
// Arithmetic only; handles zeros case; complexity O(digits(N)).

#include <iostream>
using namespace std;

// Count digits.
unsigned digitCount(unsigned long long n)
{
	if (n == 0) return 1;            // 0 has 1 digit
	unsigned count = 0;
	while (n > 0) { n /= 10; count++; }
	return count;
}

// Compute 10^p.
unsigned long long powerOf10(unsigned p)
{
	unsigned long long result = 1;
	for (unsigned i = 0; i < p; i++) result *= 10;
	return result;
}

// Return true if n ends with block.
bool endsWith(unsigned long long n, unsigned long long block)
{
	unsigned blockLen = digitCount(block);
	unsigned long long divisor = powerOf10(blockLen);

	// Extract the last 'blockLen' digits from n
	unsigned long long lastDigits = n % divisor;

	return lastDigits == block;
}

// Return true if block occurs in n.
bool containsBlock(unsigned long long n, unsigned long long block)
{
	if (n == 0 && block == 0) return true; // both zero → matches

	while (n > 0)
	{
		if (endsWith(n, block)) return true; // found a match
		n /= 10;                             // shift one digit to the right
	}
	return false;
}

// Remove first and last digits; return middle (or 0 if too short).
unsigned long long removeFirstAndLastDigit(unsigned long long n)
{
	unsigned len = digitCount(n);

	if (len < 3) return 0;                 // too short to have A and B

	n /= 10;                                // remove last digit
	unsigned long long pow10 = powerOf10(len - 2);
	n %= pow10;                             // remove first digit
	return n;
}

// Return true if N = A∘K∘B with A>0,B>0.
bool containsMiddleBlock(unsigned long long N, unsigned long long K)
{
	// Early exit: K cannot be inside N if K >= N
	if (K >= N) return false;

	if (digitCount(N) < 3) return false;   // too short to contain A and B
	N = removeFirstAndLastDigit(N);        // isolate middle part
	return containsBlock(N, K);            // check if K occurs strictly inside
}

// Wrapper.
bool task1(unsigned long long n, unsigned long long k)
{
	return containsMiddleBlock(n, k);
}

// Simple test harness for demonstration.
int main()
{
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
	cout << "N=9090909, K=90:" << (task1(9090909, 90) ? "True" : "False") << endl;

	return 0;
}
