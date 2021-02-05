#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    char st[100];

    cout << "Please enter string: ";
    cin.getline(st, 100);

    for (int i = 1; i < strlen(st); i++)
        st[i++] = toupper(st[i]);
    cout << st << endl;
}