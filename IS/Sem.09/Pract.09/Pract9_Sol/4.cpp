#include <iostream>

bool is_mon_increasing(int* seq, int size, int index = 0) {

    if (index == size - 1)
    {
        return true;
    }

    if (seq[index] < seq[index + 1])
    {
        return is_mon_increasing(seq, size, index + 1);
    }
    
    return false;
    
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    std::cout << is_mon_increasing(arr,6);
    return 0;
}
