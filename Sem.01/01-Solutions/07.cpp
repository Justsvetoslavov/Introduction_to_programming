#include <iostream>

int main()
{
    int age = 0;
    double height = 0.0;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Enter your height in meters: ";
    std::cin >> height;

    std::cout << "\n--- Your information ---\n";
    std::cout << "Age: " << age << '\n';
    std::cout << "Height: " << height << " m\n";

    if (age < 0 || height <= 0.0)
    {
        std::cerr << "Warning: one or more values are invalid.\n";
        return 1;
    }

    return 0;
}