#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4};
    int arrSize = *(&arr + 1) - arr;

    int num = 0;

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] % 2 == 0)
        {
            num += 1;
        }
    }

    cout << "Length: " << num << endl;
}