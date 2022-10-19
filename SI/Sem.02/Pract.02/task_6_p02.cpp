

#include <iostream>
#include<math.h>
int main()
{
    double a = 0;
    double b = 0;
    double c = 0;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "c = ";
    std::cin >> c;
    double D = b*b - 4*a*c;
    if (D > 0)
    {
        double X1 = (-b - sqrt(D)) / 2 * a;
        double X2 = (-b + sqrt(D)) / 2 * a;
        std::cout << "X1 = " << X1 << std::endl << "X2 = " << X2;
    }
    if (D == 0)
    {
        double X1 = (-b) / 2 * a;
        std::cout << "X1 = X1 = " << X1;
    }
    if(D < 0)
    {
        std::cout<<"Invalid";
    }
    return 0;
}

