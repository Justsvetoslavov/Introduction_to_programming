#include <iostream>

const int CHARACTERS_COUNT = 256;

void unstableCountingSort(char* arr, size_t length) {
	size_t arrLength = strlen(arr);
	int counter[CHARACTERS_COUNT] = { 0 };
	// count every char
	for (size_t i = 0; i < length; i++) {
		counter[arr[i]]++;
	}
    
    size_t index = 0;
    for (size_t i = 0; i < CHARACTERS_COUNT; i++) {
        while (counter[i] != 0) {
            arr[index++] = i;
            counter[i]--;
        }
    }
}

int main() {
	char arr[] = "ababababababa";
	unstableCountingSort(arr, 13);
	std::cout << arr;
}