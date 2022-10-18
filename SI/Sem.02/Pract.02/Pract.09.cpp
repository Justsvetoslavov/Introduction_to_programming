using namespace std;

int main()
{
	//ex 9
	int a = 0;
	int b = 0;
	int c = 0;

	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;

	int max = (a < b ? b : a) < c ? c : (a < b ? b:a);
	cout << "The max num is: " << max;
}