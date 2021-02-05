#include <bits/stdc++.h>
using namespace std;

const int ARsize = 5;

void print_array(int *arr)
{

    static int i;

    if (i == ARsize)
    {
        i = 0;
        cout << endl;
        return;
    }

    cout << arr[i] << " ";
    i++;

    print_array(arr);
}

int main()
{

    int arr[ARsize] = {3, 5, 6, 8, 1};

    print_array(arr);

    return 0;
}