#include <iostream>

bool largest_validation(int number, int neighbor1, int neighbor2) {

    if (number > (neighbor1 + neighbor2 / 2)) 
    {
        return true;
    }
    else return false;
    
}

void find_index(int* arr, int size, int &largest) {

    if (size == 0)
    {
        return;
    }
    

    if (largest_validation(arr[size], arr[size + 1], arr[size - 1]) && arr[size] > largest)
    {
        largest = arr[size];
    }
    
    return find_index(arr, size - 1, largest);  
    
}

int main(int argc, char const *argv[])
{
    short n;
    do
    {
        std::cin >> n;
    } while (n < 0 || n > 20);

    int* array = new int[n];
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }

    int largest = -1;
    find_index(array, n - 1, largest);
    
    std::cout << largest;

    delete[] array;

    return 0;
}
