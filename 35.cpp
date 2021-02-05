#include <iostream>
using namespace std;

struct Student
{
    string firstName;
    string lastName;
    int age;
    string subjects[5];
};

int main()
{
    Student st1;
    st1.firstName = "Maria";
    st1.lastName = "Nilsson";
    st1.age = 25;
    st1.subjects[0] = "science";
    st1.subjects[1] = "IT";
    st1.subjects[2] = "art";
    st1.subjects[3] = "maths";
    st1.subjects[4] = "English";

    Student st2;
    st2.firstName = "Alex";
    st2.lastName = "Smith";
    st2.age = 20;
    st2.subjects[0] = "science";
    st2.subjects[1] = "IT";
    st2.subjects[2] = "art";
    st2.subjects[3] = "maths";
    st2.subjects[4] = "English";

    if (st1.age > st2.age)
    {
        cout << st1.firstName << endl;
    }
    else
    {
        cout << st2.firstName << endl;
    }
}