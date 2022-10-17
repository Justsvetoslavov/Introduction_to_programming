#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int x1, y1, x2, y2;
    cout<<"Please enter the coordinates of point 1:"<<endl;
    cin>>x1>>y1;
    cout<<"Please enter the coordinates of point 2:"<<endl;
    cin>>x2>>y2;
    float distance = sqrt(pow((x1-x2),2) + pow((y1-y2),2));
    cout<<"The distance is "<<distance<<endl;
}

