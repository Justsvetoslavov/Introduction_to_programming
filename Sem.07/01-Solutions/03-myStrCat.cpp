// Version 1
// Concatenation done in additional array
void myStrCat(const char* str1, const char* str2, char* result) {
    size_t str1Length = myStrLen(str1);
    size_t str2Length = myStrLen(str2);

    for (size_t i = 0; i < str1Length; i++) {
        result[i] = str1[i];
    }

    for (size_t i = 0; i < str2Length; i++) {
        result[str1Length + i] = str2[i];
    }

    result[str1Length + str2Length] = '\0';
}

// Version 2
// Concatenation done in destination (as in stl strcat)
void my_strcat(char* dest, const char* source)
{
	size_t destLength = myStrLen(dest);
	size_t sourceLength = myStrLen(source);

	for (size_t i = 0; i < sourceLength; i++) {
		dest[destLength + i] = source[i];
	}

	dest[destLength + sourceLength] = '\0';
}

// Version 1 - without strLen
// Concatenation done in additional array
void myStrCatV2(const char* str1, const char* str2, char* result) {
    size_t resultIndex = 0, sourceIndex = 0;
    while (str1[sourceIndex] != '\0') {
        result[resultIndex++] = str1[sourceIndex++];
    }
    
    sourceIndex = 0;
    while (str2[sourceIndex] != '\0') {
        result[resultIndex++] = str2[sourceIndex++];
    }

    result[resultIndex] = '\0';
}

// Version 2 - without strLen
// Concatenation done in destination (as in stl strcat)
void my_strcatV2(char* dest, const char* source)
{
    size_t destIndex = 0;
    while(dest[destIndex] != '\0') {
        destIndex++;
    }

    size_t sourceIndex = 0;
    while (source[sourceIndex] != '\0') {
        dest[destIndex++] = source[sourceIndex++];
    }

	dest[destIndex] = '\0';
}
