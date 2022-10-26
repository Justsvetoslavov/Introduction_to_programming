#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	unsigned int num, newnum, result, digits;
	result = 0;
	cout << "Enter a number:";
	cin >> num;
	newnum = num * num;
	digits = log10(newnum) + 1;
	for (int i = digits; i !=0; i--)
	{
		result = result + (newnum % 10) * pow(10,i-1);
		newnum = newnum / 10;
		
	}
	cout << result;
	
	return 0;
}
