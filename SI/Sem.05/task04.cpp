#include <iostream>

//int getLengthOfANum(int n) {
//    int counter = 0;
//    while (n != 0)
//    {
//        n / 10;
//        counter++;
//    }
//    return counter;
//}

int main()
{
    /*int n;
    std::cout << "N = ";
    std::cin >> n;*/
    
    int num[] = { 1, 2, 4, 8, 4, 7, 1 };
    int size = 7;
    for (int i = 0; i < size / 2; i++)
    {
        if (num[i] != num[size - i - 1])
        {
            std::cout << "No";
            return false;
        }
    }

    std::cout << "Yes";

}