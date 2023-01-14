bool isValid(char ch) {
	return ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9';
}

bool isLess(const char* w1, const char* w2) {

	while (isValid(*w1) && isValid(*w2)) {
		if (*w1 < *w2) {
			return true;
		}
		if (*w1 > *w2) {
			return false;
		}
		w1++;
		w2++;
	}

	return !isValid(*w1);
}

const char* getLexMin(const char* text) {
	const char* iter = text;
	const char* minIter = nullptr;

	while (*iter != '\0') {
		if (isValid(*iter) && ((iter == text) || !isValid(*(iter - 1)))) {
			if (minIter == nullptr) {
				minIter = iter;
			}
			else {
				if (isLess(iter, minIter)) {
					minIter = iter;
				}
			}
		}
		++iter;
	}

	return minIter;
}
