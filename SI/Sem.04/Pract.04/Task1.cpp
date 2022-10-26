
#include <iostream>
int sum(int a, int b) {
    return a + b;

 }
int main()
{
    int number1 = 0;
    int number2 = 0;
    std :: cin >> number1 >> number2;
    std::cout << sum(number1, number2);
    return 0;
}

//Да се състави функция sum(int a, int b), 
//която приема две числа и връща като резултат сбора им.