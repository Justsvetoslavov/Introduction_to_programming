#include <iostream>

int Gcd(int x, int y)
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

	std::cout << "a, b, c, d= \n";
	std::cin >> a >> b >> c >> d;
	if (!cin || a < 1 || b < 1 || c < 1 || d < 1) {
		std::cout << "Error! \n";
		return 1;
	}

	int r = Gcd(a, b);
	std::cout << "gcd{" << a << ", " << b << "}= " << r << "\n";

	int s = Gcd(c, d);
	std::cout << "gcd{" << c << ", " << d << "}= " << s << "\n";

	std::cout << "gcd{" << a << ", " << b << ", " << c << ", " << d << "}= " << Gcd(r, s) << "\n";

	return 0;
}
