#include <iostream>

int Abs(int input)
{
	return input >= 0 ? input : -input;
}

void Compass(double x1, double y1, double x2, double y2) {
	double	xDistance = Abs(x1 - x2), yDistance = Abs(y1 - y2);

	if (xDistance <= 0.1 && yDistance <= 0.1) {
		std::cout << "You're there already!";
	} else {
		if (yDistance > 0.1) std::cout << (y1 - y2 > 0 ? 'S' : 'N');
		if (xDistance > 0.1) std::cout << (x1 - x2 > 0 ? 'W' : 'E');
	}
}

int main()
{
	double x1 = 0, y1 = 0, x2 = 0, y2 = 0;

	std::cin >> x1 >> y1 >> x2 >> y2;

	Compass(x1, y1, x2, y2);

	return 0;
}
