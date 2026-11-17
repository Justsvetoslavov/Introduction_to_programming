bool searchInText(const char text[], const char word[]) {
	size_t textIndex = 0;

	while (text[textIndex] != '\0') {
		if (text[textIndex] == word[0]) {
			size_t startIndex = textIndex; // Remember where we started
			textIndex++;
			size_t wordIndex = 1;
			bool contains = true;
			while (word[wordIndex] != '\0') {
				if (text[textIndex] != word[wordIndex]) {
					contains = false;
					break;
				}

				textIndex++;
				wordIndex++;
			}

			if (contains) {
				return true;
			}
			
			// Reset to one position after where we started matching
			textIndex = startIndex + 1;
		}
		else {
			textIndex++;
		}
	}

	return false;
}