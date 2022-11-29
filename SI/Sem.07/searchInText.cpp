bool searchInText(const char* text, const char* word) {
    size_t textLength = myStrLen(text);
    size_t wordLength = myStrLen(word);

    for (size_t i = 0; i < textLength; i++) {
        if (text[i] == word[0]) {
            bool contains = true;
            i++;
            for (size_t j = 1; j < wordLength; j++) {
                if (text[i] == '\0' || text[i] != word[j]) {
                    contains = false;
                    break;
                }
                i++;
            }

            if (contains) {
                return true;
            }
        }
    }

    return false;
}