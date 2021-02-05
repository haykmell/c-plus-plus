#include <iostream>
using namespace std;

int main()
{
    int first[20], second[20], c, n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter elements of first array" << endl;

    for (c = 0; c < n; c++)
        cin >> first[c];

    cout << "Enter elements of second array" << endl;

    for (c = 0; c < n; c++)
        cin >> second[c];

    cout << "Sum of multiplication two arrays:" << endl;

    double sum = 1;

    for (c = 0; c < n; c++)
    {
        sum *= first[c] * second[c];
    }
    cout << "Sum: " << sum << endl;
    return 0;
}