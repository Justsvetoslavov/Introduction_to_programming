#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    cout<<"Enter the coefficients of the quadratic polynomial: "<<endl;
    cin>>a>>b>>c;
    if(a == 0 && b == 0 && c == 0) {
        cout<<"Every x is a root"<<endl;
    } else if (a == 0 && b == 0 && c != 0) {
        cout<<"There are no roots of this polynomial"<<endl;
    } else if (a == 0 && b!= 0 && c != 0) {
        double root = (-1 * c) / b;
        cout<<"The root of the equation is "<<root<<endl;
    } else {
        int D = b*b - 4 * a * c;
        if(D < 0) cout<<"There are no REAL roots of this polynomial"<<endl;
        else if(D == 0) {
            double root = (-1 * b) / (2*a);
            cout<<"The root of the polynomial is "<<root<<endl;
        } else {
            double root1 = ((-1 * b) + sqrt(D)) / (2 * a);
            double root2 = ((-1 * b) - sqrt(D)) / (2 * a);
            cout<<"The roots of the polynomial are "<<root1<<" and "<<root2<<endl;
        }
    }
}