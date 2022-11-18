#include <iostream>
using namespace std;

int fromDecimalToBineryCountOnes(int num) 
{
	int count = 0;
	while (num != 0)
	{
		if (num % 2 != 0)
			count++;
		num /= 2;
	}
	return count;
}

int main()
{
    int num;
    cin >> num;
    cout << fromDecimalToBineryCountOnes(num);
}