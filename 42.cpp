#include <iostream>
using namespace std;

void myRecur(int num)
{
    if (num < 0)
    {
        return;
    }

    cout << num << endl;
    myRecur(num - 1);
}

int main()
{
    int num = 5;
    myRecur(num);
}