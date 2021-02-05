#include <cstring>
#include <iostream>
#include <cstdlib>
#define ll long long
using namespace std;

ll fibo_iter(int n)
{
    int previous = 1;
    int current = 1;
    int next = 1;
    for (int i = 3; i <= n; ++i)
    {
        next = current + previous;
        previous = current;
        current = next;
    }
    return next;
}

int main()
{
    int n = 9;
    cout << fibo_iter(n) << endl;
    return 0;
}