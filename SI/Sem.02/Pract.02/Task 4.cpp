

#include <iostream>

using namespace std;

int main()
{
    int percent = 0;
    int grade = 0;
    cout << "Result: ";
    cin >> percent;
    if (percent >= 90)
    {
        cout << "Grade: 6+" << endl;
    }
    else if (percent >= 80)
    {
        cout << "Grade: 6" << endl;
    }
    else if (percent >= 70)
    {
        cout << "Grade: 5" << endl;
    }
    else if (percent >= 60)
    {
        cout << "Grade: 4" << endl;
    }
    else if (percent >= 40)
    {
        cout << "Grade: 3" << endl;
    }
    else
    {
        cout << "Grade: 2" << endl;
    }
}

