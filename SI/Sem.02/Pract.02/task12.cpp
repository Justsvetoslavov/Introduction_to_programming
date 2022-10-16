#include <iostream>
using namespace std;
int main() {
    int day, month;
    cout<<"Please enter the month: "<<endl;
    cin>>month;
    cout<<"Please enter the day: "<<endl;
    cin>>day;
    bool falseDate = false;
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        if(day <= 0 || day > 31) falseDate = true;
    } else if(month == 4 || month == 6 || month == 9 || month == 11) {
        if(day <= 0 || day > 30) falseDate = true;
    } else if(month == 2) {
        if(day <= 0 || day > 28) falseDate = true;
    } else falseDate = true;

    if(!falseDate) {
        day++;
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        if(day > 31 && month == 12) {day = 1; month = 1;} else if(day > 31) {day = 1; month++;}
    } else if(month == 4 || month == 6 || month == 9 || month == 11) {
        if(day > 30) {day = 1; month++;}
    } else if(month == 2) {
        if(day > 28) {day = 1; month++;}
    }

    cout<<"The next day is "<<day<<"/"<<month<<endl;

    } else cout<<"The date you have entered doesn't exist!"<<endl;


}