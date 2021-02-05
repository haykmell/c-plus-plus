#include <iostream>
using namespace std;

int main()
{
    string d = "0123456789ABCDEF";

    int num;
    cout << "Please enter a number: ";
    cin >> num;

    string res;

    while (num > 0)
    {
        res = d[num % 16] + res;
        num /= 16;
    }

    cout << res << endl;
}