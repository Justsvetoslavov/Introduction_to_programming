
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a four-digit number: ";
    int number, newnumber1,newnumber2;
    cin >> number;
    
    if (number >= 1000 && number <= 9999)
    {
        newnumber1 = (number / 1000)*10 + (number % 10);
        newnumber2 = ((number/100)%10) * 10 + (number / 10)%10;
        if (newnumber1 > newnumber2) { cout << "greater: "<<newnumber1<<" > "<<newnumber2; }
        if (newnumber1 < newnumber2) { cout << "less: " << newnumber1 << " < " << newnumber2; }
        if (newnumber1 == newnumber2) { cout << "equal: " << newnumber1 << " = " << newnumber2; }
    }
    else { cout << "Invalid symbols!"; }
}
