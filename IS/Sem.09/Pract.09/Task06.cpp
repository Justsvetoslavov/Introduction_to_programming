void Resize(int*& array, int& arraySize, int element, int index) 
{
	int* newArray = new int[++arraySize];
	
	for (size_t i = 0; i < index; i++) {
		newArray[i] = array[i];
	}
 
   	newArray[index] = element;
 
    	for (size_t i = index + 1; i < arraySize; i++) {
        	newArray[i] = array[i - 1];
    	}
 
    	delete[] array;
   	array = newArray;
}
 
void AddElement(int*& array, int& arraySize, int element, int index = 0)
{
	if (arraySize == 0 || element >= array[arraySize - 1]) {
        	Resize(array, arraySize, element, arraySize);
        	return;
    	}
 
    	if (element < array[index]) {
        	Resize(array, arraySize, element, index);
        	return;
    	}
 
    	AddElement(array, arraySize, element, index + 1);
}
