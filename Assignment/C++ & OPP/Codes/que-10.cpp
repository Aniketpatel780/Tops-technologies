#include<iostream>

using namespace std;

class math
{
    int a;
    int b;
    public:
    math(int A, int B)
    {
        a = A;
        b = B;
    }
    int add()
    {
        return a + b;
    }
    int sub()
    {
        return a - b;
    }
    int mul()
    {
        return a * b;
    }
    float div()
    {
        return (float) a / b;
    }

};

int main(void)
{
    math div(10, 5);
    cout << div.div();
    return 0;
}