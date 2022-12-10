

#include <iostream>
const int SIZE = 1024;
int compareStrings(const char* firstString, const char* secondString)
{
	size_t index = 0;
	while (firstString[index] == secondString[index])
	{
		if (firstString[index] == '\0')
		{
			return 0;
		}
		index++;
	}
	if (firstString[index] - secondString[index] < 0)
	{
		return -1;
	}
	else { return 1; }
}
int main()
{
	char firstString[SIZE];
	char secondString[SIZE];
	std::cin >> firstString >> secondString;

	std::cout << compareStrings(firstString, secondString);
}


