#include <iostream>
using namespace std;

class Calculator
{
    double x;
    double y;

public:
    Calculator(double x_ = 0, double y_ = 0)
    {
        x = x_;
        y = y_;
    }

    double add()
    {
        return x + y;
    }

    double subtract()
    {
        return x - y;
    }
    double multiply()
    {
        return x * y;
    }
    double divide()
    {
        return x / y;
    }
};

int main()
{
    Calculator calc(5, 5);
    double sum = calc.divide();

    cout << sum << endl;
}