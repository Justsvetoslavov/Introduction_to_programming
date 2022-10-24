#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Please enter a number: "<<endl;
    cin>>n;
    if(n < 5) cout<<"Invalid input!"<<endl; // защото по-малка пит. тройка от 3 4 5 няма
    else {
        for(int i = 1; i <= n; i++) {
            for(int j = i; j <= n; j++) {
                for(int k = j; k <= n; k++) {
                    if(i * i + j * j == k * k) cout<<i<<" "<<j<<" "<<k<<endl;
                }
            }
        }
    }  
}