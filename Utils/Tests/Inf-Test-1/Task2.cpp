#include <iostream>

void PrintLongestSubsequenceOfEqualNumbers(unsigned n) // It's actually subarray, not subsequence, but arrays are not studied yet
{
	short max = 1; // The LSEN will always consist of at least one element
	short currentMax = 1;
	short digitFromMaxSubseq = n % 10;

    short lastDigit, preLastDigit;
	while (n >= 10) {
		lastDigit = n % 10;
		preLastDigit = (n / 10) % 10;

		if (preLastDigit == lastDigit) {
			currentMax++;
			if (currentMax > max) {
				max = currentMax;
				digitFromMaxSubseq = preLastDigit;
			}
		} else {
			currentMax = 1;
		}

		n /= 10;
	}
	std::cout << max << " (" << digitFromMaxSubseq << ")\n";
}

int main()
{
	PrintLongestSubsequenceOfEqualNumbers(1777444329);
}