#include <iostream>
using namespace std;
const int ARZ = 5;

int *removeElm(int *arr, int index)
{
    int maxsize = ARZ;

    if (index < 0 || index >= maxsize)
    {
        cout << "Invalid\n";
    }
    else
    {
        for (int i = index; i <= maxsize - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[maxsize - 1] = {};
    }

    return arr;
}

int main()
{
    int arr[ARZ] = {5, 10, 15, 20};
    int *p = removeElm(arr, 0); // remove element in 1 index

    cout << "Array is:\n";
    for (int i = 0; i < ARZ; i++)
    {
        if (p[i] != '\0')
            cout << p[i] << " ";
    }
    cout << endl;

    return 0;
}