#include <iostream>
using namespace std;

int main()
{
    cout << "Please enter a number: ";

    string data;
    getline(cin, data);

    int maxNumber = 0;
    int minNumber = stoi(string(1, data[0]));

    for (char c : data)
    {
        int current = stoi(string(1, c));

        if (current > maxNumber)
        {
            maxNumber = current;
        }

        if (current < minNumber)
        {
            minNumber = current;
        }
    }

    cout << "Max: " << maxNumber << endl;
    cout << "Min: " << minNumber << endl;
}