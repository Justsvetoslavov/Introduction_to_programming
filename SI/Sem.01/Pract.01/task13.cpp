#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int x1, x2, y1, y2;
	cout << "x1: ";
	cin >> x1;
	cout << "y1: ";
	cin >> y1;
	cout << "x2: ";
	cin >> x2;
	cout << "y2: ";
	cin >> y2;

	double distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

	cout << "Distance: " << fixed << setprecision(2) << distance;

	return 0;
}