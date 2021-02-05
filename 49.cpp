#include <iostream>
using namespace std;

string func(int num, int k)
{
    string result = "";

    for (int i = 0; i < k; i++)
    {
        result += to_string(num)[i];
    }

    return result;
}

int main()
{
    int res = stoi(func(45812, 2));

    cout << res << endl;
}
