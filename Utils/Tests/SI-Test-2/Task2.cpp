#include <iostream> 

const size_t MAX_SIZE = 1024;
 
void Init(bool* arr, size_t size, bool value)
{
    for(size_t i = 0; i < size; i++) {
        arr[i] = value;
    }
}
 
void MarkNotNeededNumbers(bool* arr, size_t size, int queryNumber)
{
    for(size_t i = 1; i < size; i++) {
        if((i % queryNumber == 0) || (queryNumber % i == 0)) {
            arr[i] = false;
        }
    }
}
 
void PrintSolution(const bool* sieve, size_t size)
{
    for(size_t i = 1; i <= size; i++) {
        if(sieve[i]) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;
}
 
int main()
{
    bool sieve[MAX_SIZE];
 
    int n;
    cin >> n;
    Init(sieve, n, true);
 
    int userQuery;
    cin >> userQuery;
    while(userQuery != 0) {
        MarkNotNeededNumbers(sieve, n, userQuery);
        cin >> userQuery;
    }
    PrintSolution(sieve, n);
 
    return 0;
}