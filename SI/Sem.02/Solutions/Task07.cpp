#include <iostream>
using namespace std;

int main()
{
	char letter;
	cin >> letter;
	if (letter >= 65 && letter <= 90)
	{
		letter += 32;
		cout << letter << endl;
	}
	else if (letter >= 97 && letter <= 122)
	{
		letter -= 32;
		cout << letter << endl;

	}
	else
	{
		cout << "Not a symbol";
	}
}