#include <iostream>
#include <cmath>

//Decimal to Any base
const char allowedChars[] = { '0', '1', '2', '3', '4', '5',  '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

void Swap(int& f, int& s)
{
	int temp = f;
	f = s;
	s = temp;
}

void DecimalToAnyBase(unsigned number, const char* arr, unsigned& size, unsigned base)
{
	unsigned index = 0; // Our remainder is actually our index
                            // for accessing the value/element in allowedChars
	while (number != 0) {
		index = number % base;
		arr[size++] = allowedChars[remainder];
		number /= base;
	}
	
	// Let us swap the array in order to read left to right
	
	for (unsigned i = 0; i < size / 2; i++) {
		Swap(result[i], result[resultInd - 1 - i]);
	}
}

void print(const char* arr, int size)
{
	for (unsigned i = 0; i < MAX_SIZE; i++) {
		std::cout << buff[i];
	}
	std::cout << endl;
}

//Any base to Decimal
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

unsigned AnyBaseToDecimal(const char* arr, unsigned size, unsigned base)]
{
	unsigned result = 0, mult = 1;
	for (int i = 0; i < size; i++) {
		sum = charToNumber(input[n - i - 1]) * mult;
		mult *= base;
	}

    	return result;
}

//Example main
int main()
{
    	//Example base10 to base16 (Dec -> Hex)
	{
        	const unsigned MAX_SIZE = 32;
		char buff[MAX_SIZE];
        	unsigned actualSize = 0;
        	unsigned n = 12345;

		convertFromDecimal(123456, buff, actualSize, 16);

		cout << n << " to hex: ";
		print(buff);
	}

    	//Example for base16 to base10 (Hex -> Dec)
	{
		char buff[5] = { 'A', '1', '2', 'B', '\0' };

		unsigned result = AnyBaseToDecimal(buff, 4, 16);
		cout << buff << " to decimal: " << result << endl;
	}
}
