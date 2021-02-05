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

    double minN = arr[0];
    double maxN = 0;

    for (int i = 0; i < lengthOfArray; i++)
    {
        if (arr[i] > maxN)
        {
            maxN = arr[i];
        }

        if (arr[i] < minN)
        {
            minN = arr[i];
        }
    }

    double sum = minN + maxN;

    cout << "Sum: " << sum << endl;
    return 0;
}