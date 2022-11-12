bool isPalindrom(const int* arr, int size)
{
	for (int i = 0; i < size / 2; i++)
	{
		if (arr[i] != arr[size - i - 1]) {
			return false;
                }
	}
	return true;
}

bool isPalindrom(int number)
{
	int buffer[MAX_SIZE];
	int size = 0;
	while (number > 0) {
		buffer[size] = number % 10;
		number /= 10;
		size++;
	}

	return isPalindrom(buffer, size);
}}
