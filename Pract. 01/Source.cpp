#include<iostream>

int main() {/*
	// Exercise 1
	// Output the given text to the console:
	// Oh what
	// a happy day!
	// Oh yes,
	// what a happy day!
	std::cout << "Oh what\na happy day!\nOh yes,\nwhat a happy day!" << std::endl;

	//Exercise 2
	int a1 = 5, b1 = 4, a2 = 7, b2 = 9;
	int p1 = 2 * (a1 + b1), p2 = 2 * (a2 + b2);
	int s1 = a1 * b1, s2 = a2 * b2;

	std::cout << "R1 has P = " << p1 << " and S = " << s1 << std::endl;
	std::cout << "R2 has P = " << p2 << " and S = " << s2 << std::endl;

	//Exercise 3
	double lev, usd, euro;
	double levToUSD = 0.5, levToEUR = 0.51;

	std::cout << "Enter amount in BGN: ";
	std::cin >> lev;

	usd = lev * levToUSD;
	euro = lev * levToEUR;

	std::cout << "USD = " << usd << "\nEURO = " << euro << std::endl;

	//Exercise 4
	double a3, b3;

	std::cout << "Please enter the length of the first side: ";
	std::cin >> a3;
	std::cout << "Please enter the length of the second side: ";
	std::cin >> b3;

	double p3 = 2 * (a3 + b3), s3 = a3 * b3;

	std::cout << "Rectangle has P = " << p3 << " and S = " << s3 << std::endl;

	//Exercise 5
	double num1, num2;

	std::cout << "Please enter num1: ";
	std::cin >> num1;
	std::cout << "Please enter num2: ";
	std::cin >> num2;

	std::cout << std::boolalpha << (num1 < num2) << std::endl;

	//Exercise 6
	int num3, num4, wholePartAfterDivision, f;

	std::cout << "Devider: ";
	std::cin >> num3;
	std::cout << "Devisor: ";
	std::cin >> num4;

	int quotient = num3 / num4, remainder = num3% num4;

	std::cout << "The quotient of the division is: " << quotient << std::endl;
	std::cout << "The remainder of the division is: " << remainder << std::endl;

	//Exercise 7
	int apples, pears, bananas;

	std::cout << "Apples: ";
	std::cin >> apples;
	std::cout << "Peares: ";
	std::cin >> pears;
	std::cout << "Bananas: ";
	std::cin >> bananas;

	std::cout << "Pesho, don't forget to buy " << apples << " apples, " << pears << " pears and " << bananas << " bananas!";
	
	//Exercise 8
	double a4, b4;

	std::cout << "Please enter the length of the first side then the second side: ";
	std::cin >> a4 >> b4;

	double p4 = 2 * (a4 + b4), s4 = a4 * b4;

	std::cout << "Rectangle has P = " << p4 << " and S = " << s4 << std::endl;
	
	//Exercise 9
	double r1, C, S, PI = 3.14159265;

	std::cout << "Please enter the radius of the circle: ";
	std::cin >> r1;

	C = 2 * PI * r1, S = PI * r1 * r1;


	std::cout << "Circle has C = " << C << " and S = " << S << std::endl;
	*/
	//Exercise 10
	double a, b, c, D, x1, x2;

	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;
	std::cout << "c = ";
	std::cin >> c;

	D = b * b - 4 * a * c;

	x1 = (-b - std::sqrt(D)) / (a * 2);
	x2 = (-b + std::sqrt(D)) / (a * 2);

	std::cout << "x1 = " << x1 << ", x2 = " << x2;

	return 0;
}