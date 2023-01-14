bool IsValidSymbol(char ch) {
    return ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9';
}

bool IsLexLess(const char* w1, const char* w2) {

    while (IsValidSymbol(*w1) && IsValidSymbol(*w2)) {
        if (*w1 < *w2) {
            return true;
        }
        if (*w1 > *w2) {
            return false;
        }
        w1++;
        w2++;
    }

    return !IsValidSymbol(*w1);
}

const char* GetLexMin(const char* text) {
    const char* iter = text;
    const char* minIter = nullptr;

    while (*iter != '\0') {
        if (IsValidSymbol(*iter) && ((iter == text) || !IsValidSymbol(*(iter - 1)))) {
            if (minIter == nullptr) {
                minIter = iter;
            }
            else {
                if (IsLexLess(iter, minIter)) {
                    minIter = iter;
                }
            }
        }
        ++iter;
    }

    return minIter;
}
