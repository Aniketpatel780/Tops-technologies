#include <iostream>

using namespace std;

class obj
{
    public:
    void math(int a, char c, int b)
    {
        switch(c)
        {
            case '+': cout << a + b;break;
            case '-': cout << a - b;break;
            case '*': cout << a * b;break;
            case '/': cout << a / b;break;
            default: cout << "Invalid input";
        }
    }
    void math(double a, char c, double b)
    {
        switch(c)
        {
            case '+': cout << a + b;break;
            case '-': cout << a - b;break;
            case '*': cout << a * b;break;
            case '/': cout << a / b;break;
            default: cout << "Invalid input";
        }
    }
    void math(double a, char c, int b)
    {
        switch(c)
        {
            case '+': cout << a + b;break;
            case '-': cout << a - b;break;
            case '*': cout << a * b;break;
            case '/': cout << a / b;break;
            default: cout << "Invalid input";
        }
    }
    void math(int a, char c, double b)
    {
        switch(c)
        {
            case '+': cout << a + b;break;
            case '-': cout << a - b;break;
            case '*': cout << a * b;break;
            case '/': cout << a / b;break;
            default: cout << "Invalid input";
        }
    }
};

int main(void)
{
    obj a;
    a.math(1.2, '+' , 2);
    return 0;
}