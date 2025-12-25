#include <iostream>

// Decimal to any base (up to base 16) helpers
// We only use C-style arrays and iostream; no STL containers.
const char allowedChars[] = { '0', '1', '2', '3', '4', '5',  '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

// Swaps two integers; used if needed when reversing buffers
void Swap(int& f, int& s)
{
	int temp = f;
	f = s;
	s = temp;
}

// Converts a positive decimal `number` to representation in `base`.
// - `base` must be between 2 and 16 (inclusive).
// - Writes the digit characters into `arr` from left to right.
// - `size` is set to the count of produced characters.
// Note: `arr` must be large enough to hold the result; no bounds checking here.
void DecimalToAnyBase(unsigned number, char* arr, unsigned& size, unsigned base)
{
	// Handle zero explicitly
	if (number == 0) {
		arr[0] = '0';
		size = 1;
		return;
	}

	unsigned produced = 0;
	// Collect digits in reverse order by repeated division
	while (number != 0) {
		unsigned remainder = number % base; // remainder is the digit index
		arr[produced++] = allowedChars[remainder];
		number /= base;
	}

	// Reverse the buffer so digits become left-to-right
	for (unsigned i = 0; i < produced / 2; i++) {
		char tmp = arr[i];
		arr[i] = arr[produced - 1 - i];
		arr[produced - 1 - i] = tmp;
	}

	// Set the resulting size (number of characters)
	size = produced;
}

// Prints exactly `size` characters from `arr` and a newline.
void print(const char* arr, unsigned size)
{
	for (unsigned i = 0; i < size; i++) {
		std::cout << arr[i];
	}
	std::cout << std::endl;
}

// Any base to decimal helpers
int charToNumber(char c)
{
	if (c >= '0' && c <= '9') {
		return c - '0';
	} else if (c >= 'a' && c <= 'z') {
		return c - 'a' + 10;
	} else if (c >= 'A' && c <= 'Z') {
		return c - 'A' + 10;
	}
	
	return -1; //error code
}

unsigned AnyBaseToDecimal(const char* arr, unsigned size, unsigned base)
{
	// Interpret `arr` as a big-endian digit sequence in `base`.
	// Accumulate value using positional weights.
	unsigned result = 0;
	unsigned mult = 1;
	// process from least significant digit (rightmost) to left
	for (int i = 0; i < (int)size; i++) {
		int digit = charToNumber(arr[size - 1 - i]);
		// simplistic validation: if invalid digit or digit >= base, treat as 0
		if (digit < 0 || (unsigned)digit >= base) {
			digit = 0;
		}
		result += (unsigned)digit * mult;
		mult *= base;
	}

	return result;
}

//Example main
int main()
{
	// Example base10 to base16 (Dec -> Hex)
	{
		const unsigned MAX_SIZE = 32; // enough for 32-bit number in base 2
		char buff[MAX_SIZE];
		unsigned actualSize = 0;
		unsigned n = 123456;

		DecimalToAnyBase(n, buff, actualSize, 16);

		std::cout << n << " to hex: ";
		print(buff, actualSize);
	}

	// Example for base16 to base10 (Hex -> Dec)
	{
		char buff[4] = { 'A', '1', '2', 'B' }; // A12B (no null needed for our function)

		unsigned result = AnyBaseToDecimal(buff, 4, 16);
		std::cout << "A12B to decimal: " << result << std::endl;
	}
}
