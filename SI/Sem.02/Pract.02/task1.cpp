#include <iostream>
using namespace std;
int main() {
    int year;
    cin>>year;
    bool leap = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
    if(leap) cout<<"The year is leap";
    else cout<<"The year isn't leap";
}