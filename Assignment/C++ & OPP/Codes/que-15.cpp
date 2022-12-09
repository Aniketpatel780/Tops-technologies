#include <iostream>

using namespace std;

class Array
{
    int Array1[5];
    int Array2[5];
    int Result[5];
    public:

    void array1()
    {
        for(int i = 0; i < 5; i++)
        {
            cout << "enter array1[" << i << "]\t";
            cin >> Array1[i];
        }
    }

    void array2()
    {
        for(int i = 0; i < 5; i++)
        {
            cout << "enter array2[" << i << "]\t";
            cin >> Array2[i];
        }
    }

    void result()
    {
        for(int i = 0; i < 5; i++)
        {
            Result[i] = Array1[i] + Array2[i];
        }   
        for(int i = 0; i < 5; i++)
        {
            cout << "Result array[" << i << "]\t";
            cout << Result[i] << endl;
        }
    }
};

int main(void)
{
    Array array;
    array.array1();
    array.array2();
    array.result();

    return 0;
}