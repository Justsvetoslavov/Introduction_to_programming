#include <iostream>
const int MAX_LEN_OF_NUM = 10;
int lenOfNum(int number){
    int count = 0;
    if(number == 0) return 1;
    while(number != 0){
        count++;
        number /= 10;
    }
    return count;
}
void fillDigitsOfNumInArr(int * arr, int len, int number){
    for(int i = len - 1; i >= 0; i--){
        arr[i] = number % 10;
        number /= 10;
    }
}
int fromArrOfDigitsToInt(const int * arr, int len){
    int resultNum = 0;
    for(int i = 0; i < len; i++){
       resultNum = arr[i] + resultNum * 10;
    }
    return resultNum;
}
void swap(int& num1, int& num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
void swapKDigit(int num1, int num2, int k){//task5-pract7
    int lenOfNum1 = lenOfNum(num1);
    int lenOfNum2 = lenOfNum(num2);
    int digitsInNum1[MAX_LEN_OF_NUM];
    int digitsInNum2[MAX_LEN_OF_NUM];
    fillDigitsOfNumInArr(digitsInNum1, lenOfNum1, num1);
    fillDigitsOfNumInArr(digitsInNum2, lenOfNum2, num2);
    if(k <= lenOfNum1 && k <= lenOfNum2){
        swap(digitsInNum1[k-1], digitsInNum2[k-1]);
        int newNum1 = fromArrOfDigitsToInt(digitsInNum1, lenOfNum1);
        int newNum2 = fromArrOfDigitsToInt(digitsInNum2, lenOfNum2);
        std::cout << newNum1 << " " << newNum2 << std::endl;
        
    } else{
        std::cout << num1 << " " << num2 << std::endl;
    }
}

