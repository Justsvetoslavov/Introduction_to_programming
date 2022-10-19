// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>

int main() {

	return 0;
}
		
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


// Task 1
//int year;
//
//std::cin >> year;
//
//if (year % 4 == 0) {
//    if (year % 100 == 0 && year % 400 != 0) {
//        std::cout << "Not leap year";
//    }
//    else {
//        std::cout << "A leap year";
//    }
//}
//else {
//    std::cout << "Not leap year";
//};

// Task 2
//char x;
//std::cin >> x;
//
//int code = int(x);
//
//if (code >= 97 && code <= 123 || code >= 65 && code <= 91) {
//    if (code == 97 || code == 102 || code == 106 || code == 112 || code == 118 || code == 122 ||
//        code == 65 || code == 70 || code == 74 || code == 80 || code == 86 || code == 90) {
//        std::cout << "Yes, glasna";
//    }
//    else {
//        std::cout << "Yes, suglasna";
//    }
//}
//else {
//    std::cout << "NO";
//}


// Task 3
//float a, b;
//std::cout << "Enter the first number" << std::endl;
//std::cin >> a;
//std::cout << "Enter the second number" << std::endl;
//std::cin >> b;
//
//a > b ? std::cout << "The first is higher" : a < b
//    ? std::cout << "The second is higher" : std::cout << "They are equal";
//return 0;

//Task 4
//int wholeNumber;
//int theBest;
//
//std::cout << "Result: ";
//std::cin >> wholeNumber;
//
//wholeNumber >= 90 ? theBest = 6 :
//	wholeNumber >= 80 ? theBest = 6 :
//	wholeNumber >= 70 ? theBest = 5 :
//	wholeNumber >= 60 ? theBest = 4 :
//	wholeNumber >= 40 ? theBest = 3 : theBest = 2;
//
//wholeNumber >= 90 ? std::cout << "Grade: " << theBest << "+" :
//	std::cout << "Grade: " << theBest;
//
//return 0;

//Task 5
//float a, b, c;
//bool isThere;
//
//std::cin >> a;
//std::cin >> b;
//std::cin >> c;
//
//if (a >= b && a >= c)
//{
//	isThere = a < b + c;
//}
//else if (b >= c && b >= a)
//{
//	isThere = b < a + c;
//}
//else if (c >= b && c >= a)
//{
//	isThere = c < b + a;
//}
//else {
//	isThere = 0;
//}
//isThere ? std::cout << "Yes there is" : std::cout << "No, there isn't";

//Task 11
//float a, b, c;
//float number;
//
//std::cin >> a;
//std::cin >> b;
//std::cin >> c;
//
//if (a >= b && a >= c) {
//	if (b >= c) {
//		number = 100 * a + 10 * b + c;
//	}
//	else {
//		number = 100 * a + 10 * c + b;
//	}
//}
//else if (b >= a && b >= c) {
//	if (a >= c) {
//		number = 100 * b + 10 * a + c;
//	}
//	else {
//		number = 100 * b + 10 * c + a;
//	}
//}
//else {
//	if (b >= a) {
//		number = 100 * c + 10 * b + a;
//	}
//	else {
//		number = 100 * c + 10 * a + b;
//	}
//}
//
//std::cout << number;

//Task 13
//int number;
//int first, middle, forth, end;
//char result;
//
//std::cin >> number;
//
//first = number / 1000;
//middle = (number % 1000 - number % 10) / 10;
//forth = number % 10;
//end = first * 10 + forth;
//
//
//if (end > middle) {
//	std::cout << "More(" << end << ">" << middle << ")";
//}
//else if (end < middle) {
//	std::cout << "Less(" << end << "<" << middle << ")";
//}
//else {
//	std::cout << "Equal(" << end << "=" << middle << ")";
//}