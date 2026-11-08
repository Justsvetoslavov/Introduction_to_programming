#include <iostream>

int main() {
    int age = 0;
    double height = 0.0;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Enter your height in meters: ";
    std::cin >> height;

    std::cout << "\n--- Your information ---\n";
    std::cout << "Age: " << age << '\n';
    std::cout << "Height: " << height << " m\n";

    std::cerr << "Note: the entered values were not validated.\n";

    return 0;
}
