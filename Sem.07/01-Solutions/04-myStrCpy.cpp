void myStrCopy(char* dest, const char* source) {
    size_t index = 0;
    while (source[index] != '\0') {
        dest[index] = source[index];
        index++;
    }

    dest[index] = '\0';
}