#include <iostream>
using namespace std;

int main()
{
    cout << "Please enter a number: ";

    string num;
    getline(cin, num);

    int sum = 1;

    for (char c : num)
    {
        int current = stoi(string(1, c));
        sum *= current;
    }

    cout << "Sum: " << sum << endl;
}