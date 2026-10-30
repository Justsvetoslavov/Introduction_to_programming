#include <iostream>
using namespace std;

// Функция за НОД
int gcd(int a, int b)
{
    while(b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

// Функция за съкращаване
void simplify(int& numerator, int& denominator)
{
    int g = gcd(numerator, denominator);
    numerator /= g;
    denominator /= g;
}

int main()
{
    int n1, d1, n2, d2;
    cout << "Въведете две дроби (числител/знаменател): ";
    cin >> n1 >> d1 >> n2 >> d2;

    // съкращаваме двете дроби
    simplify(n1, d1);
    simplify(n2, d2);

    // събираме дробите
    int numerator = n1 * d2 + n2 * d1;
    int denominator = d1 * d2;

    // съкращаваме резултата
    simplify(numerator, denominator);

    cout << numerator << "/" << denominator << endl;
    return 0;
}
