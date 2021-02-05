#include <iostream>
using namespace std;

int main()
{
    string sentence = "Hope 28you doing ama5zing 4";

    string numbers = "";

    for (int i = 0; i < sentence.length(); i++)
    {
        if (isdigit(sentence[i]))
        {
            numbers += sentence[i];
        }
    }

    cout << numbers << endl;
}