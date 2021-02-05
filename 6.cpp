#include <bits/stdc++.h>
using namespace std;

string reverse(string str)
{
    string reversedStr;

    for (int i = str.length() - 1; i >= 0; i--)
    {
        reversedStr += str[i];
    }

    return reversedStr;
}

int main(void)
{
    string name;

    cout << "Please enter your name: ";
    getline(cin, name);

    cout << reverse(name) << endl;

    return 0;
}