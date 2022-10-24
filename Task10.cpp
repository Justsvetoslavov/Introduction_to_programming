#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Please enter a number: ";
    cin>>num;
    if(num <= 0) cout<<"Invalid input!"<<endl;
    else {
        int numCopy = num, digitCounter = 0;
        while(numCopy > 0) {
            numCopy /= 10;
            digitCounter++;
        }

        int newNum = 0, powerOfTen = 1;

        if(digitCounter % 2 != 0) {
        for(int i = 1; i <= digitCounter; i++) {
            if(i != ((digitCounter / 2) + 1)) {
                newNum += (num % 10) * powerOfTen;
                num /= 10;
                powerOfTen *= 10;
            } else num /= 10;
        }

        } else {
            for(int i = 1; i <= digitCounter; i++) {
            if(i != (digitCounter / 2) && i != ((digitCounter / 2) + 1)) {
                newNum += (num % 10) * powerOfTen;
                num /= 10;
                powerOfTen *= 10;
            } else num /= 10;
        }
        }
        cout<<newNum<<" "<<(newNum + 1)<<endl;
    }

}