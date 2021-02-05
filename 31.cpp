#include <bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(char *str)
{
    int count[256] = {0};

    int len = strlen(str);
    int max = 0;
    char result;

    for (int i = 0; i < len; i++)
    {
        count[str[i]]++;
        if (max < count[str[i]])
        {
            max = count[str[i]];
            result = str[i];
        }
    }

    return result;
}

int main()
{

    char str[50];

    cout << "Please enter the string: ";
    cin >> str;

    cout << "Max occurring character is: "
         << getMaxOccuringChar(str) << endl;
}