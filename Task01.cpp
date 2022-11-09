#include <iostream>

void initializeArray(int a[], int size) {
    std::cout << "Please enter your numbers:" << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cin >> a[i];
    }
}

bool foundARepetitive(int a[], int size) {
    const int FIRST_BOUND = size - 1;
    for (int i = 0; i < FIRST_BOUND; i++)
    {
        for (int j = (i + 1); j < size; j++)
        {
            if (a[i] == a[j])
            {
                std::cout << "The first repeating element is " << a[j] << std::endl;
                return true;
            }
        }
    }
    std::cout << "All elements are unique in this array" << std::endl;
    return false;
}

int main()
{
    const int SIZE = 7;
    int numbers[SIZE];
    initializeArray(numbers, SIZE);
    foundARepetitive(numbers, SIZE);
    return 0;
}
