#include <iostream>

using namespace std;

class math
{
    public:
    void sum(int a, int b)
    {
        cout << "add: " << a + b << endl;
        cout << "sub: " << a - b << endl;
        cout << "mul: " << a * b << endl;
        cout << "div: " << a / b << endl;
    }

    void sum(double a, double b)
    {
        cout << "add: " << a + b << endl;
        cout << "sub: " << a - b << endl;
        cout << "mul: " << a * b << endl;
        cout << "div: " << a / b << endl;
    }
};

int main(void)
{
    math a;
    a.sum(1, 2);
    math b;
    b.sum(1.2, 3.8);
    return 0;
}