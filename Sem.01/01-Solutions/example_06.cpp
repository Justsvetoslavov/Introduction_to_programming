#include <iostream>

int main() {
    int age = 0;
    double height = 0.0;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Enter your height in meters: ";
    std::cin >> height;

    if(age < 0 || height < 0.0) {
        std::cerr << "Invalid input\n";
        return 1;
    }

    std::cout << "\n--- Your information ---\n";
    std::cout << "Age: " << age << '\n';
    std::cout << "Height: " << height << " m\n";

    return 0;
}
