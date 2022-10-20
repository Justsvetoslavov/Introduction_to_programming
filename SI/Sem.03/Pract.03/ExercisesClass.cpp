// ExercisesClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

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

//1 Task
//for (int i = 1; i <= n; i++) {
//    for (int j = 1; j <= i; j++) {
//        cout << j;
//    }
//    cout << endl;
//}

// Task 2
//int n;
//cin >> n;
//
//for (int i = 1; i < n; i++) {
//    cout << "X is: " << n - i << "  Y is: " << i << endl;
//}

//Task 3
//int input;
//cin >> input;
//input *= input;
//int sum = 0;
//
//while (input >= 1) {
//    sum *= 10;
//    int last = input % 10;
//    sum += last;
//    input /= 10;
//}
//
//cout << sum << endl;
//cout << "The number: " << input;

//Task 4
//int m, n;
//cout << "Write the first number" << endl;
//cin >> m;
//
//cout << "Write the second number" << endl;
//cin >> n;
//int current = 1;
//
//for (int i = 1; i <= m; i++) {
//    for (int j = 1; j <= n; j++) {
//        cout << current << " ";
//        current += 1;
//    }
//
//    cout << endl;
//}

//Task 5
//int number = 1000;
//int guess = 1000;
//int tries = 0;
//
//while (number < 0 || number > 100) {
//    cout << "Enter the number. It should be between 0 and 100: " << endl;
//    cin >> number;
//}
//
//while (guess != number) {
//    cout << "Guess the number" << endl;
//    cin >> guess;
//    if (guess > number) {
//        cout << "High guess" << endl;
//    }
//    else if (guess < number) {
//        cout << "Low guess" << endl;
//    }
//    tries += 1;
//}
//
//cout << "You've guessed the number in " << tries << " tries";

// Task 6
//int number = -1;
//int marked = -1;
//while (number <= 0) {
//    cout << "Enter a number bigger than zero" << endl;
//    cin >> number;
//}
//
//bool skip = false;
//
//for (int i = 0; i <= number; i++) {
//    int first, second;
//    cin >> first;
//    if (i == 0 || skip) {
//        skip = false;
//        continue;
//    }
//    cin >> second;
//    if (first != second) {
//        skip = true;
//        marked = first;
//    }
//}
//
//cout << "You've enterd the int " << marked << " once";

//Task 7
//int number;
//cin >> number;
//int biggestSide = 5;
//int m = 2;
//int n = 1;
//int limit = 1000;
//
//for (int i = m; i <= limit; i++) {
//    for (int j = n; j < i; j++) {
//        biggestSide = pow(i, 2) + pow(j, 2);
//        if (biggestSide > number) {
//            break;
//        }
//        int firstSide = pow(i, 2) - pow(j, 2);
//        int secondSide = 2 * i * j;
//        if (firstSide < secondSide) {
//            cout << firstSide << " " << secondSide << " " << biggestSide << endl;
//        }
//        else {
//            cout << secondSide << " " << firstSide << " " << biggestSide << endl;
//        }
//    }
//}

// Task 9
//int num, first, second, third, next;
//cin >> num;
//first = 1;
//second = 1;
//third = 2;
//next = 0;
//
//cout << first << " " << second;
//while (next <= num) {
//    next = second + third;
//    second = third;
//    third = next;
//    cout << " " << next;
//}