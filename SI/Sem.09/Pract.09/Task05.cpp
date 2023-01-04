#include <iostream>
const int MAX_SIZE = 10;
bool isPalindrome(const char* array, int leftIndx, int rightIndx)
{

	if (leftIndx >= rightIndx)
	{
		return true;
	}

	if (array[leftIndx] != array[rightIndx])
	{
		return false;
	}

	return isPalindrome(array, leftIndx + 1, rightIndx - 1);

}

int getLength(const char* arr)
{
	int len = 0;
	while (arr[len] != '\0')
	{
		len++;
	}
	return len;
}
int main()
{
	char array[MAX_SIZE]{};
	std::cin >> array;
	if (isPalindrome(array, 0, getLength(array) - 1))
	{
		std::cout << "It is palindrome.";
	}
	else
	{
		std::cout << "It is not palindrome.";
	}
	return 0;
}


