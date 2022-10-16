#include <iostream>
using namespace std;
int main() {
 int a,b,c;
 cout<<"Please enter 3 digits:"<<endl;
 cin>>a>>b>>c;   
   if((a < 0 || a > 9) && (b < 0 || b > 9) && (c < 0 || c > 9)) cout<<"Wrong input!"<<endl;

   else {

    int number = 0;

 if(a >= b && b >= c) number += (a * 100 + b * 10 + c);
    else if(a >= c && c >= b) number += (a * 100 + c * 10 + b);
    else if(b >= a && a >= c) number += (b * 100 + a * 10 + c);
    else if(b >= c && c >= a) number += (b * 100 + c * 10 + a);
    else if(c >= a && a >= b) number += (c * 100 + a * 10 + b);
    else number += (c * 100 + b * 10 + a);
    
    cout<<"The biggest number is "<<number<<endl;
   }
}