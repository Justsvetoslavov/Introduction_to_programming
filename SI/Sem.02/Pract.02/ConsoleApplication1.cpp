// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>

int main()
{
    float a, b;
    std::cout << "Enter the first number" << std::endl;
    std::cin >> a;
    std::cout << "Enter the second number" << std::endl;
    std::cin >> b;

    a > b ? std::cout << "The first is higher" : a < b
        ? std::cout << "The second is higher" : std::cout << "They are equal";
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


