#include <iostream>
#include <math.h>
using namespace std;

int main() {

	//Zadacha 13

	int x1, x2, y1, y2;
	cout << "Enter x1: ";
	cin >> x1;
	cout << "Enter y1: ";
	cin >> y1;
	cout << "Enter x2: ";
	cin >> x2;
	cout << "Enter y2: ";
	cin >> y2;

	double distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

	cout << "Distance: " << distance << endl;

	return 0;
}