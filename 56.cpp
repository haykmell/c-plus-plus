#include <iostream>
using namespace std;

const int ARZ = 3;

class DyncArr
{
    int *arr = new int[ARZ];
    int count = 0;

public:
    ~DyncArr()
    {
        delete[] arr;
    }
    void addElm(int elm)
    {
        if (count == 3)
        {
            cout << "You don't have enough space in the array to add " << elm << endl;
        }
        else
        {
            arr[count] = elm;
            count++;
        }
    }

    void show()
    {
        for (int i = 0; i < ARZ; i++)
        {
            cout << arr[i] << endl;
        }
    }
};
int main()
{
    DyncArr gog;
    gog.addElm(2);
    gog.addElm(4);
    gog.addElm(6);
    gog.show();
}