#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Please enter a number: "<<endl;
    cin>>num;
    if(num <= 1) cout<<"Invalid input!"<<endl;
    else {
        int sum = 0;
        cout<<"Please enter "<<(num - 1)<<" numbers: "<<endl;
        for(int i = 0; i < (num - 1); i++) {
            int alpha;
            cin>>alpha;
            sum += alpha;
        }
        int expectedSum = (num * (num + 1)) / 2;
        cout<<"Missing element: "<<(expectedSum - sum)<<endl;
    }
}