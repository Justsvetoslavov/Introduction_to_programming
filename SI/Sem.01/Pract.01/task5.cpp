#include <iostream>
using namespace std;
int main() {
    int one, two;
    cout<<"Please enter two numbers:"<<endl;
cin >> one >> two;
bool oneLessTwo = one < two;
cout<<"The first number is less than the second - " << boolalpha << oneLessTwo;
}