#include <iostream>
using namespace std;

int theSpecByte(int num, int bit)
{
	int count = 0, result = 0;
	while (count != bit)
	{
		(num % 2 != 0) ? result = 1 : result = 0;
		num /= 2;
		count++;
	}
	return result;
}

int main()
{
    int num, bit;
    cin >> num >> bit;
    cout << theSpecByte(num, bit);
    return 0;
}