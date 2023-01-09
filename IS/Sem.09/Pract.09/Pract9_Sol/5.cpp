#include <iostream>
#include <cstring>

bool reversed_eq(char* word, char* reversed, int size) {

    for (size_t i = 0; i < strlen(word); i++)
    {
        if (word[i] != reversed[i])
        {
            return false;
        }
        
    }
    return true;
}

bool is_pal(char* word, int end_index, char* reversed, int index = 0) {

    if (end_index < 0)
    {
        reversed[index] = '\0';
    }
    if (reversed_eq(word, reversed, end_index + 2))
    {
        return true;
    }
    if (end_index < 0)
    {
        return false;
    }
    // If we get size with strlen() it wont count '\0', 
    // so we start from the index before it
    reversed[index] = word[end_index]; 

    return is_pal(word, end_index - 1, reversed, index + 1);
}

int main(int argc, char const *argv[])
{
    char word[] = {'b', 'a', 'o', 'a', 'b', '\0'};
    char reversed[6];
    std::cout << is_pal(word, 4, reversed);
    return 0;
}
