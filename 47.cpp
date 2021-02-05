#include <iostream>
using namespace std;

string strReverse(string str)
{
    string a = "";

    for (int i = str.length(); i >= 0; i--)
    {
        a += str[i];
    }

    return a;
}

int main()
{
    string reversedStr = strReverse("hello");

    cout << reversedStr << endl;
}