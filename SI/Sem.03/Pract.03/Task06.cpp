#include <iostream>
#include <vector>
using namespace std;
int main()
{
	//i am using vector because I can't think of a 
	//way to solve this task without using it

	//using vector instead of array because of unknown length

	vector<int> elements;
	int num;
	while (true) {
		cout << "enter number"<<endl;
		cin >> num;
		if (num != 0) {
			elements.push_back(num);
		}
		else {
			break;
		}
	}

	//finding the single number in vector(list)
	bool found = true;
	for (int i = 0; i < elements.size(); i++) {
		for (int j = 0; j < elements.size(); j++) {
			if (j != i && elements.at(j) == elements.at(i)) {
				found = false;
				break;
			}
		}
		if (found) {
			cout << "the single number is " << elements.at(i);
			break;
		}
		found = true;
	}
}