#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout<<"Please enter the coefficients of the quadratic expression:" <<endl;
    int a,b,c;
    cin>>a>>b>>c;
    double x1 = (((-1) * b) + sqrt(b*b - 4 * a * c))/ (2 * a); 
    double x2 = (((-1) * b) - sqrt(b*b - 4 * a * c))/ (2 * a); 
    cout<<"The roots of the equation are "<<x1 << " and " << x2;
    //тук се предполага, че дискриминантата винаги ще е положителна и че полиномът винаги ще е от втора степен (поне това се бях договорил с Плами като я попитах за условието)
    //на втория практикум съм представил задачата как се решава във всички реални случаи
}