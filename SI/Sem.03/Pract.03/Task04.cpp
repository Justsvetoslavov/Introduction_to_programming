
#include <iostream>

int main()
{
    int n = 0, m = 0;
    std::cin >> m >> n;

    if (n < 0 || m < 0)
    {
        std::cout << "Invalid input";
        return 0;
    }
    int counter = 1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            std::cout << counter << " ";
            counter++;
            
        }
        std::cout << std::endl;
        
    }


    return 0;
}

