#include <iostream>
using namespace std;
int main() {
    int sec, secCopy;
cout << "Please enter the amount of seconds:" << endl;
cin>>sec;
if(sec < 0) cout<<"Not a vaild input! "<<endl;
else{
secCopy = sec;
int seconds = sec % 60;
sec /= 60;
int minutes = sec % 60;
sec /= 60;
int hours = sec % 24;
sec /= 24;
int days = sec;
cout<<secCopy<<" seconds are "<<sec<<" days, "<<hours<<" hours, "<<minutes<<" minutes, and "<<seconds<<" seconds.";
}
}