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

    cout << st1.subjects[0] << endl;
}