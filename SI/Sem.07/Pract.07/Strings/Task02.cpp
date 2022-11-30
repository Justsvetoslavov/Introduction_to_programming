#include <iostream>;

using namespace std;

const int SIZE = 1000;
bool CheckInput(int a)
{
	return a > 0;
}
int GetStringLenght(char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}
int NewString(char* str, int beg, int end)
{
	int strLenght = GetStringLenght(str);
	if (beg > strLenght)
	{
		cout << " ";
		return 0;
	}
	if (end > strLenght)
	{
		while (str[beg] != '\0')
		{
			cout << str[beg];
			beg++;
		}
		return 0;
	}
	for (int i = beg; i <= end; i++)
		{
			cout << str[i];
		}
	return 0;
}
int main()
{
	char str[SIZE];
	int beg, end;
	cin.getline(str, SIZE);
	cin >> beg >> end;
	if (!CheckInput(beg) || !CheckInput(end))
	{
		return -1;
	}
	NewString(str, beg, end);
}