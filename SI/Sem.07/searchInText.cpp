bool searchInText(const char text[], const char word[]) {
	size_t textIndex = 0;

	while (text[textIndex] != '\0') {
		if (text[textIndex] == word[0]) {
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
		}
		else {
			textIndex++;
		}
	}

	return false;
}