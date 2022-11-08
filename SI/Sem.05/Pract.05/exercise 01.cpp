
#include <iostream>
using namespace std;

int main() {
    int array[100], n, i;
    cout << "Enter number of elements: " ;
    cin >> n;
    cout << "Enter elements: ";
    for (i = 0; i < n; i++)
        cin >> array[i];

    cout << "Original array: ";
    for (int c = 0; c < n; c++)
        cout << array[c] << " ";

    cout << endl;
    for (int i = 0; i < n; i++)

        for (int j = i + 1; j < n; j++)
            if (array[i] == array[j]) {
                cout << "First repeating integer is " << array[i];
                return 0;
            }

    cout << "No integer repeated";
    return 0;
}

