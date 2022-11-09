#include <iostream>
void FindCommonElements(int* arr1, int lengthArr1, int* arr2, int lengthArr2);
void FindCommonElementsSortedArrs(int* arr1, int lengthArr1, int* arr2, int lengthArr2);
int main()
{
    const int length = 10;
    int numbersArr1[length] = {1,2,3,4,5,6,7,8,9,10};
    int numbersArr2[length] = {4,2,6,55,66,1,1,56,9,80};
    
    FindCommonElements(numbersArr1, length, numbersArr2, length);
    std::cout << std::endl;

    //bonus task
    
    //examples of arr's elements
    //100,222,222,222,222,222,222,222,222,2222
    //1,5,7,9,23,45,46,77,88,99
    //1,4,5,6,9,23,24,77,78,99
    int numbersArr3[length] = { 1,5,7,9,23,45,46,77,88,99 };
    int numbersArr4[length] = { 1,4,5,6,9,23,24,77,78,99 };
    FindCommonElementsSortedArrs(numbersArr3, length, numbersArr4, length);

}
void FindCommonElements(int* arr1, int lengthArr1, int* arr2, int lengthArr2)
{
    for (int i = 0; i < lengthArr1; i++)
    {
        for (int j = 0; j < lengthArr2; j++)
        {
            if (arr1[i]==arr2[j])
            {
                //TODO: remove repeating elements
                std::cout << arr1[i]<<" ";
            }
        }
    }
}

void FindCommonElementsSortedArrs(int* arr1, int lengthArr1, int* arr2, int lengthArr2)
{
    int startIndex = 0;
    bool haveCommonElements = false;
    for (int i = 0; i < lengthArr1; i++)
    {
        for (int j = startIndex; j < lengthArr2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                std::cout << arr1[i] << " ";
                startIndex = j+1;
                haveCommonElements = true;
                break;
            }
            else if (arr1[i]<arr2[j])
            {
                break;
            }
            if (arr1[i]>arr2[lengthArr2-1])
            {
                if (!haveCommonElements)
                {
                    std::cout << "No common elements!"<<std::endl;
                }
                return;
            }
        }
    }
    if (!haveCommonElements)
    {
        std::cout << "No common elements!" << std::endl;
    }
}
