//Credits for example to Elena Tuparova

#include <iostream>

int main()
{
    int i = 4;

    [=]() mutable { // here *mutable* is needed to allow the captured-by-value variable to be changed inside the lambda
        i++;
        std::cout << "Inside first lambda: " << i << std::endl;
    } (); // don't forget the brackets in order to call the function!
    std::cout << "After first lambda: " << i << std::endl; // however, i is not changed after the scope of the lambda

    [&] { i++; } ();
    std::cout << "After second lambda: " << i << std::endl;

    return 0;
}