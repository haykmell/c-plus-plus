#include <iostream>
using namespace std;

int bits(unsigned int number)
{
    string binary = "";

    for (int i = 1 << 15; i > 0; i = i / 2)
    {
        (number & i) ? binary += "1" : binary += "0";
    }

    int count = 0;

    for (int i = 0; i < binary.length(); i++)
    {
        if (binary[i] == '1')
        {
            count++;
        }
    }

    return count;
}
int main()
{
    int number = 11;
    int count = bits(number);

    cout << count << endl;

    return 0;
}