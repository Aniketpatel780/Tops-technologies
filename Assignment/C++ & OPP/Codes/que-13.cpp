#include <iostream>

using namespace std;

class mul
{
    public:
    mul(int a)
    {
        cout << "Multification value: " << a * a << endl;
    }
};

class cub
{
    public:
    cub(int a)
    {
        cout << "Cubic value: " << a * a * a << endl;
    }
};

int main(void)
{
    mul mulfi(2);
    cub cube(2);
    return 0;
}