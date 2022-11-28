#include <iostream>

//проверява дали K е "строг" суфикс на N, т.е. е суфикс, но не съвпадат
bool isSuffix(unsigned N, unsigned K) {
	while (N != 0 && K != 0) {
		if (N % 10 != K % 10) {
			return false;
		}
		N /= 10;
		K /= 10;
	}
	
	return N != 0;
}

bool isConcat(unsigned N, unsigned K) {
	//премахва последната цифра, защото ако краищата да съвпадат, числата не отговарят на условието
	N /= 10;
	
	while (N != 0) {
		if (isSuffix(N, K)) {
			return true;
		}
		N /= 10;
	}
	
	return false;
}

int main() {
	std::cout << isConcat(1234, 23);
	std::cout << isConcat(1234, 234);
	std::cout << isConcat(1234, 123);
	std::cout << isConcat(12345, 2);
}
