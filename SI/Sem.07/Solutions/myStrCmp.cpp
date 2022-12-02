int myStrCmp(const char* str1, const char* str2) {
    size_t i = 0;

    while (str1[i] == str2[i]) {
        if (str1[i] == '\0'/* && str2[i] == '\0'*/) {
            return 0;
        }

        i++;
    }

    return str1[i] - str2[i] > 0 ? 1 : -1;
}