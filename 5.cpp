#include <iostream>
using namespace std;

double add(double, double);
double subtr(double, double);
double multiply(double, double);
double divide(double, double);

int main()
{
    int num1, num2;
    string action;

    cout << "Please enter first number: ";
    cin >> num1;

    cout << "Please enter second number: ";
    cin >> num2;

    cout << "Please enter the action: ";
    cin >> action;

    double sum;

    if (action == "+")
    {
        sum = add(num1, num2);
    }
    else if (action == "-")
    {
        sum = subtr(num1, num2);
    }
    else if (action == "*")
    {
        sum = multiply(num1, num2);
    }
    else if (action == "/")
    {
        sum = divide(num1, num2);
    }

    cout << "Sum: " << sum << endl;
}

double add(double num1, double num2)
{
    return num1 + num2;
}
double subtr(double num1, double num2)
{
    return num1 - num2;
}
double multiply(double num1, double num2)
{
    return num1 * num2;
}
double divide(double num1, double num2)
{
    return num1 / num2;
}
