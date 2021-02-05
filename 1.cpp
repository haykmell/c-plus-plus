#include <iostream>
using namespace std;

int main()
{
    cout << "Please enter a number: ";

    string data;
    getline(cin, data);

    for (char c : data)
    {
        int current = stoi(string(1, c));

        cout << current << endl;
    }
}