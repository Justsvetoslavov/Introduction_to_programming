#include <iostream>
#include <math.h>
using namespace std;

int main() {

	//Zadacha 12

	int inputSec;
	int days, hours, minutes, seconds;
	cout << "Seconds: ";
	cin >> inputSec;

	days = inputSec / (60 * 60 * 24);
	hours = (inputSec / (60 * 60) % 24);
	minutes = (inputSec / 60) % 60;
	seconds = inputSec % 60;


	cout << days << " days, " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds" << endl;

	return 0;
}
