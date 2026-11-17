size_t getCharOccurrencesCount(const char* text, char symbol) {
    size_t occurrences = 0;
    size_t index = 0;
    while (text[index] != '\0') {
        if (text[index] == symbol) {
            occurrences++;
        }
        index++;
    }

    return occurrences;
}