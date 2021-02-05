#include <iostream>
using namespace std;

void myIterative(int num)
{
    while (num != -1)
    {
        cout << num << endl;
        num--;
    }
}

int main()
{
    int num = 10;
    myIterative(num);
}