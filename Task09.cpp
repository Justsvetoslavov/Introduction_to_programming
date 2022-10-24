#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Please enter a number: "<<endl;
    cin>>n;
    if(n <= 0) cout<<"Invalid input!";
    else {
        int first = 1, second = 1;
        cout<<first<<" "<<second<<" ";
        while(first + second <= n) {
            int next = first + second;
            first = second;
            second = next;
            cout<<second<<" ";
        }
        cout<<endl;
    }
}