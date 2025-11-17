#include <iostream>

int gcd(int x, int y)
{
	while (x != y)
	{
		if (x > y) {
			x -= y;
		} else {
			y -= x;
		}
	}

	return x;
}

int main()
{
	int a, b, c, d;

	std::cout << "Enter a, b, c, d: ";
	std::cin >> a >> b >> c >> d;
	
	if (!std::cin || a < 1 || b < 1 || c < 1 || d < 1) {
		std::cout << "Error! Invalid input.\n";
		return 1;
	}

	int gcdAB = gcd(a, b);
	std::cout << "gcd(" << a << ", " << b << ") = " << gcdAB << "\n";

	int gcdCD = gcd(c, d);
	std::cout << "gcd(" << c << ", " << d << ") = " << gcdCD << "\n";

	std::cout << "gcd(" << a << ", " << b << ", " << c << ", " << d << ") = " << gcd(gcdAB, gcdCD) << "\n";

	return 0;
}
