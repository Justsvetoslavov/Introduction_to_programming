#include <iostream>
const int ZERO_NUM_CHAR = 48;
const int NINE_NUM_CHAR = 57;
const int FIRST_UPPER_CASE = 65;
const int LAST_UPPER_CASE = 90;
const int FIRST_LOWER_CASE = 97;
const int LAST_LOWER_CASE = 122;
char* encryptedString(const char* arr, const int len) {//task01 - pract8
    char* encrypted = new char[len];
    for (int i = 0; i < len; i++) {
        if (arr[i] >= ZERO_NUM_CHAR && arr[i] <= NINE_NUM_CHAR) {
            encrypted[i] = '*';
        }
        else {
            encrypted[i] = arr[i];
        }
    }
    return encrypted;
}
char** divideCasesInStr(const char* myStr, const int len) {//task02 - pract8
    int countOfStr = 2, tempUpper = 0, tempLower = 0;

    char* lowerCaseSymb = new char[len];
    char* upperCaseSymb = new char[len];
    for (int k = 0; k < len; k++) {
        if (myStr[k] >= FIRST_LOWER_CASE && myStr[k] <= LAST_LOWER_CASE) {
            lowerCaseSymb[k - tempLower] = myStr[k];
            tempUpper++;
        }
        if (myStr[k] >= FIRST_UPPER_CASE && myStr[k] <= LAST_UPPER_CASE) {
            upperCaseSymb[k - tempUpper] = myStr[k];
            tempLower++;
        }
    }
    char** result = new char* [countOfStr];
    for (int i = 0; i < countOfStr; i++) {
        result[i] = new char[len];
    }
    for (int i = 0; i < tempLower; i++) {
        result[0][i] = lowerCaseSymb[i];
    }
    for (int i = 0; i < tempUpper; i++) {
        result[1][i] = upperCaseSymb[i];
    }
    delete[] lowerCaseSymb;
    delete[] upperCaseSymb;
    return result;
}
int* mergeSortedArr(const int* sortedArr1, int len1, const int* sortedArr2, int len2) {//task03-pract8
    //algorithm from internet
    int* mergeSortedArr = new int[len1 + len2];
    int i = 0, j = 0, k = 0;
    while (i < len1 && j < len2)
    {
        if (sortedArr1[i] < sortedArr2[j])
            mergeSortedArr[k++] = sortedArr1[i++];
        else
            mergeSortedArr[k++] = sortedArr2[j++];
    }
    while (i < len1) {
        mergeSortedArr[k++] = sortedArr1[i++];
    }
    while (j < len2) {
        mergeSortedArr[k++] = sortedArr2[j++];
    }
    return mergeSortedArr;
}


