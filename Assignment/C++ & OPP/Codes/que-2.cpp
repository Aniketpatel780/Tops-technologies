#include<iostream>
using namespace std;

class myClass
{
    public:
    void math(int a, int b)
    {
        cout << "Addition: " << a + b << endl;
        cout << "Subtraction: " << a - b << endl;
        cout << "Multification: " << a * b << endl;
        cout << "Division: " << (float) a / b << endl;
    }
};

int main(void)
{
    int a, b;
    cin >> a;
    cin >> b;
    myClass myObj;
    myObj.math(a, b);
    return 0;
}