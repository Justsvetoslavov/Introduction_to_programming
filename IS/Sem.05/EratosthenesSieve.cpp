#include <iostream>

const unsigned MaxSize = 1000;

void InitArray(bool* arr, unsigned size, bool value)
{
	for (unsigned i = 0; i < size; i++) {
		arr[i] = value;
    }
}

void EratosthenesSieve(bool* arr, unsigned size)
{
	arr[0] = arr[1] = false;

	for (unsigned i = 2; i < sqrt(size); i++)
	{
		if (!arr[i]) { //ако числото е задраскано
			continue;
        }
		
		for (unsigned j = i * i; j < size; j += i) {
			arr[j] = false; //задраскваме
        }
	}
}

void PrintSieve(const bool* arr, unsigned size)
{
	for (unsigned i = 0; i < size; i++)
	{
		if (arr[i]) {
			std::cout << i << " ";
        }
	}
}

int main()
{
	bool buffer[MaxSize];

	int n;
	std::cin >> n;

	InitArray(buffer, n, true);
	EratosthenesSieve(buffer, n);
	PrintSieve(buffer, n);

    return 0;
}
