#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter a number 1-10: ";
    cin>>num;
    if(num < 1 || num > 10) cout<<"Wrong input!"<<endl;
    else{
    cout<<"Roman equivalent: ";
    switch(num) {
        case 1: cout<<"I"; break;
        case 2: cout<<"II"; break;
        case 3: cout<<"III"; break;
        case 4: cout<<"IV"; break;
        case 5: cout<<"V"; break;
        case 6: cout<<"VI"; break;
        case 7: cout<<"VII";break;
        case 8: cout<<"VIII"; break;
        case 9: cout<<"IX"; break;
        case 10: cout<<"X"; break;
        default: cout<<"You haven't entered a number in the desired interval"; break;
    } 
    cout<<endl;
    }
}