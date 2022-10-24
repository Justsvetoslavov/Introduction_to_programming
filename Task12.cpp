#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Please enter your number: ";
    cin>>num;
    if(num <= 0) cout<<"Invalid input!"<<endl;
    else {
        int numCopy = num;
        bool isAPowerOfTwo = true;
        while(num > 0) {
            if(num % 2 != 0 && num != 1) {
                isAPowerOfTwo = false;
                break;
            } else num /= 2; 
        }
        cout<<numCopy<<" - power of 2? - "<<boolalpha<<isAPowerOfTwo<<endl;
    }
}