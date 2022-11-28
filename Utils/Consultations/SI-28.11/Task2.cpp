bool isDigit(char ch) {
	return ch >= '0' && ch <= '9';
}

unsigned numInStr(const char* str, unsigned &get) {
	unsigned result = 0;
	while (isDigit(str[get])) {
        	//намираме цифрата, която трябва да добавим, като от ASCII кода на цифрата извадим ASCII кода на нулата
		result = result * 10 + (str[get] - '0');
		
		//променяме оригиналния индекс, от който четем, за да продължим от там четенето
        	get++;
	}
	return result;
}

unsigned removeNumsAndReturnProduct(char* str) {
	//индекси за позицията, от която четем (get) и за позицията, на която пишем (put)
    	unsigned get, put;
	get = put = 0;
	unsigned product = 1;

	while (str[get] != '\0') {
		if (isDigit(str[get])) {
			product *= numInStr(str, get);
		}
		
		str[put++] = str[get];
		
        	//проверяваме дали не сме стигнали до края на стринга във функцията numInStr, за да не подминем края
		if (str[get] == '\0') {
			break;
		}
		get++;
	}
    
    	//слагаме край на стринга
	str[put] = '\0';
	
	return product;
}

int main()
{
	char str[] = "2abc3d45";
	std::cout << removeNumsAndReturnProduct(str) << std::endl;
	std::cout << str;
}
