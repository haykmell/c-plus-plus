#include <algorithm>
#include <cctype>
#include <iostream>
#include <iterator>
using namespace std;

void ToUpper(string &input)
{
    for_each(begin(input), end(input), [](char &c) {
        c = static_cast<char>(toupper(static_cast<unsigned char>(c)));
    });
}

int main()
{
    string name;

    cout << "Please enter your name: ";
    getline(cin, name);

    ::ToUpper(name);
    cout << name << endl;

    return 0;
}