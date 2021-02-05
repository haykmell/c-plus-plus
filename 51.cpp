#include <iostream>
using namespace std;

void ShortestWord(string text)
{
    string tmpWord = "";
    string minWord = text;

    for (int i = 0; i < (int)text.length(); i++)
    {
        if (text[i] != ' ')
        {
            tmpWord += text[i];
        }
        else
        {

            if (tmpWord.length() < minWord.length())
                minWord = tmpWord;
            tmpWord = "";
        }
    }

    if (tmpWord != "")
    {
        if (tmpWord.length() < minWord.length())
            minWord = tmpWord;
    }
    cout << "Shortest Word: " << minWord << endl;
}

int main()
{
    ShortestWord("Hope you doing amazing Vardan!");
}