#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Please enter the size of the rhombus"<<endl;
    cin>>num;
    if(num < 2 || num > 9) cout<<"Invalid input!"<<endl;
    else {
        for(int i = 1; i <= num; i++) {
            for(int j = 1; j <= 2 * num - 1; j++) {
                if(j < (num - i + 1) || j > (num + i - 1)) cout<<" ";
                else cout<<"*";
            }
            cout<<endl;
        }

        for(int i = 1; i < num; i++) {
            for(int j = 1; j <= 2 * num - 1; j++) {
                if(j > i && j < (2 * num - i)) cout<<"*";
                else cout<<" ";
            }
            cout<<endl;
        }
    }
}