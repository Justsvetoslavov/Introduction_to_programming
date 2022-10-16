#include <iostream>
using namespace std;
int main() {
    cout<<"Please enter two different numbers: "<<endl;
    int one, two;
    cin>>one>>two;
    (one != two) ? {
    cout<<((one > two) ? "The first number is bigger" : "The second number is bigger");
    } : {cout<<"The two numbers are equal!";}
}