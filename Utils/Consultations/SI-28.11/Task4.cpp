// Непозволен символ, който ще ползваме да знаем дали char има свой encoding
const char INVALID_CHARACTER = '-';
const unsigned int SPACE_INDEX = 26;

const char LOWERCASE_A = 'a';
const char LOWERCASE_Z = 'a';

/*
Помощна функция, която проверява дали даден символ е малка латинска буква
*/
bool isLower(char ch) {
	return LOWERCASE_A <= ch && ch <= LOWERCASE_Z;
}

//Помощна функция, която запълва масив с определен символ
void initEncodingArray(char* arr, size_t length) {
	for (size_t i = 0; i < length; i++) {
		arr[i] = INVALID_CHARACTER;
	}
}

/*
В C++ всеки символен низ завършва със специален знак '\0' - терминираща нула,
която показва къде е краят на низа. Използвайки този знак, ние отброяваме с цикъл
символите преди него и по този начин извеждаме дължината на символния низ
*/
size_t myStrLen(const char* str) {
	size_t index = 0;
	while (str[index] != '\0') {
		index++;
	}

	return index;
}

bool encodingExists(const char* from, const char* to, char* encoding) {
	size_t fromLength = myStrLen(from);
	size_t toLength = myStrLen(to);

	/*
	ако дължините на низа from и кодирания му низ to не съвпадат, 
	значи такова кодиране не съществува
	*/
	if (fromLength != toLength) {
		return false;
	}

	//Дължините са еднакви и може да въртим цикъл до която и да е от тях
	for (size_t i = 0; i < fromLength; i++) {
		/*
		Ако не е малка латинска буква, то тогава ще е празната клетка,
		тъй като по условие низовете са само малки латински букви или празната клетка,
        	празната клетка е с фиксирана позиция 26-последната в масива arr 
		*/
		int encodingIndex = isLower(from[i]) ? from[i] - LOWERCASE_A : SPACE_INDEX;

		/*
		Ако на този символ от from няма кодиращ символ
		слагаме кодирания му символ в масива encoding на позиция отговаряща 
		на мястото на символа в азбуката, което е символа минус 97 ('a' - ASCII кода на първата буква от азбуката)
		*/
		if (encoding[encodingIndex] == INVALID_CHARACTER) {
			encoding[encodingIndex] = to[i];
		}
		/*
		В противен случай такъв символ вече е сложен и ако новият,
		който се опитваме да сложим е различен, значи такова кодиране не съществува
		*/
		else if(encoding[encodingIndex] != to[i]) {
			return false;
		}
	}

	//ако сме изциклили веднъж през цялата дължина -> съществува такова кодиране
	return true;
}

void encode(const char* from, const char* to, const char* strToEncode, char* result) {
	/*
	Създаваме си един масим с големина 26 + 1,
	това са броя на малките латински букви плюс празното разстояние.
	*/
	char encoding[26 + 1];
	//запълваме го с някой от непозволените символи
	initEncodingArray(encoding, 26 + 1);

	if (!encodingExists(from, to, encoding)) {
		result[0] = '\0';
		return;
	}

	size_t length = myStrLen(strToEncode);

    	// Обхождаме думата, която трябва да кодираме
	for (size_t i = 0; i < length; i++) {
		/*
		Ако не е малка латинска буква, то тогава ще е празната клетка,
		тъй като по условие низовете са само малки латински букви или празната клетка,
        	празната клетка е с фиксирана позиция 26-последната в масива arr 
		*/
		size_t encodingIndex = isLower(strToEncode[i]) ? strToEncode[i] - LOWERCASE_A : SPACE_INDEX;
		
        	// за всеки character проверяваме дали има кодиране
       		// в encoding масива, ако не го оставяме същия
        	if (encoding[encodingIndex] != INVALID_CHARACTER) {
			result[i] = encoding[encodingIndex];
		}
		else {
			result[i] = strToEncode[i];
		}
	}

    	// Винаги поставяме терминираща нула на края, когато ние
    	// създаваме низа
	result[length] = '\0';
}
