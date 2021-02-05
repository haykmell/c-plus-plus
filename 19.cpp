#include <iostream>

using namespace std;
int main()
{
    double num1, num2, num3;

    double arr[3] = {};
    double lengthOfArray = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;

    arr[0] = num1;
    arr[1] = num2;
    arr[2] = num3;

    for (int i = lengthOfArray - 1; i >= 0; i--)
    {
        cout << arr[i] << ' ';
    }

    cout << endl;
}