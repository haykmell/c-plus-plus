#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string text = "";

    string myText = "";
    ifstream MyReadFile("text.txt");
    while (getline(MyReadFile, myText))
    {
        text += myText;
    }
    MyReadFile.close();

    cout << text << endl;

    string firstLetters = "";
    firstLetters += text[0];

    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == ' ')
        {
            firstLetters += text[i + 1];
        }
    }

    cout << endl;
    cout << firstLetters << endl;
}
