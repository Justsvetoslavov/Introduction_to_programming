
#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;
    
    for (int x = 1; x < n; x++)
    {
        for (int y = 1; y < n; y++)
        {
            if ((x + y) == n)
            {
                std::cout << "x = " << x << " y = " << y << std::endl;
            }
        }
    }
    return 0;
}
