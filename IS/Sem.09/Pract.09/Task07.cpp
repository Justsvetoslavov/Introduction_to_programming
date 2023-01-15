#include <iostream>

unsigned* reverse(unsigned* array, int st_in, int e_in) {

    int size = e_in - st_in + 1;
    unsigned* reversed = new unsigned[size];
    for (size_t i = 0, j = e_in; i < size && j >= st_in; i++, j--)
    {
        reversed[i] = array[j];
    }
    return reversed;
}

bool is_pal(unsigned* array, int st_in, int e_in) {

    unsigned* reversed = reverse(array, st_in, e_in);
    
    for (size_t i = st_in, j = 0; i <= e_in && j < e_in - st_in + 1; i++, j++)
    {
        if (array[i] != reversed[j])
        {
            return false;
        }
        
    }
    return true;
}

void print_success_msg(unsigned* array, int st_in, int e_in, unsigned counter) {

    std::cout << "Palindrome : [";
    for (int i = st_in; i <= e_in; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << "] found in " << counter << "steps" << '\n';
}

bool can_make_pal_in_n_moves(unsigned* array, int size, unsigned n, int end_index, int start_index = 0, int counter = 0) {

    if (end_index == 0 || start_index == size - 1 || counter > n)
    {
        return false;
    }
    if (is_pal(array, start_index, end_index) && counter <= n)
    {
        print_success_msg(array, start_index, end_index, counter);
        return true;
    }
    
    if(can_make_pal_in_n_moves(array, size, n, end_index - 1, start_index, counter + 1)) 
        return true;

    if(can_make_pal_in_n_moves(array, size, n, end_index, start_index + 1, counter + 1))
        return true;

    return false;
}

int main() {

    unsigned n, size;
    std::cin >> n >> size;
    unsigned* array = new unsigned[size];

    for (size_t i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }
    
    std::cout << can_make_pal_in_n_moves(array, size, n, size - 1, 0);
    
    delete[] array;
    return 0;
}