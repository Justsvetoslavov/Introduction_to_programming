#include <iostream>
using namespace std;
int main()
{
	unsigned int number, attempts;
	attempts = 1;
	int newNumber;
	cout << "Enter a number between [0,100]: "<<endl;
	cin >> number;
	cout << "Enter a number: "<<endl;
	cin >> newNumber;
	if (number >= 0 && number <= 100)
	{
		while (number != newNumber)
		{ 
			cout << "The number of attempts is: " << attempts << endl;
			attempts++;
			cout<<(number > newNumber ? "The new number is smaller." : "The number is bigger") << endl;
		    cin >> newNumber;
		 
		}
		cout << "The number of attempts is: "<<attempts;
	}
	else
	{
		cout << "The number is not in the range!  ";
		return 0;
	}
	return 0;
}


