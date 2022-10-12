#include <iostream>

using namespace std;

int main()
{
	int inputSeconds;

	cout << "Seconds: ";
	cin >> inputSeconds;

	int days = inputSeconds / (60 * 60 * 24);
	int hours = (inputSeconds / (60 * 60)) % 24;
	int minutes = (inputSeconds / 60) % 60;
	int seconds = inputSeconds % 60;

	cout << days << " days, " 
		 << hours << " hours, " 
		 << minutes << " minutes and " 
		 << seconds << " seconds";

	return 0;
}