// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    // 1
    std::cout << "Oh what\n"
        << "a happy day!\n"
        << "Oh yes,\n"
        << "what a happy day!\n" << endl;

    //2
    double a, b;
    a = 5.4;
    b = 7.9;
    double s = a * b;
    cout << s << endl;

    //3
    cout << endl;
    double lv;
    cin >> lv;
    double dolllars = 0.5 * lv;
    double euro = 0.51 * lv;
    cout << dolllars << endl << euro << endl;

    //4
    cout << "\nPlease enter the length of the first side: ";
    double a1, b1;
    cin >> a1;
    cout << "Please enter the length of the second side: ";
    cin >> b1;
    double s1 = a1 * b1;
    cout << s1;

    //5
    double num1, num2;
    cout << "\n\nPlease enter the first number: ";
    cin >> num1;
    cout << "Please enter the second number: ";
    cin >> num2;
    cout << boolalpha << (num1 < num2) << endl;

    //6
    int dividend, divisor, quotient, remainder;
    cout << "\nDividend: ";
    cin >> dividend;
    cout << "Divisor: ";
    cin >> divisor;

    remainder = dividend % divisor;
    quotient = dividend / divisor;

    cout << "\nThe quotient of the division is : " << quotient << endl;
    cout << "The remainder of the division is : " << remainder << endl;

    //7
    int apples, pears, bananas;
    cout << "\nApples: ";
    cin >> apples;
    cout << "Pears: ";
    cin >> pears;
    cout << "Bananas: ";
    cin >> bananas;

    cout << "\nPesho, don't forget to buy " << apples << " apples, "
        << pears << " pears and " << bananas << " bananas!\n\n";

    //8
    double a2, b2;
    cin >> a2 >> b2;
    double p = 2 * (a2 + b2);
    double s2 = a2 * b2;
    cout << "p: " << p << " s: " << s2 << "\n\n";

    //9
    double r, c, sCircle;
    cin >> r;
    c = 2 * r * 3.14159265;
    sCircle = r * r * 3.14159265;
    cout << "\nc: " << c << " s: " << sCircle << "\n\n";

    //10
    double ak, bk, ck;
    cout << "a = ";
    cin >> ak;
    cout << "b = ";
    cin >> bk;
    cout << "c = ";
    cin >> ck;

    double x1, x2;
    x2 = ( - bk + sqrt(bk * bk - 4 * ak * ck)) / 2 * ak;
    x1 = (- bk - sqrt(bk * bk - 4 * ak * ck))  / 2 * ak;

    cout << "x1 = " << x1 << ", x2 = " << x2 << "\n\n";

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
