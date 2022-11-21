#include<iostream>
using namespace std;

 class  myClass {
    public:
    int fibonnaci(int a)
    {
        int firstNum = 0;
        int lastNum = 1;
        int currentNum = 0;
        for(int i = 0; i < a; i++)
        {
            cout << currentNum << endl;
            if (i == 1) 
            {
                continue;
            }
            currentNum = firstNum + lastNum;
            firstNum = lastNum;
            lastNum = currentNum;
            
        }
    }

    int factorial(int n)
    {
        for (int i = n; i > 1; i--)
        {
            n = n * (i - 1);
        }
         cout << n;
    }
};

int main(void)
{
    myClass myObject;

    // fibonacci
    int b;
    cout << "fibonnaci series: ";
    cin >> b;
    myObject.fibonnaci(b);

    // factorial 
    int a;
    cout << "Factorial of: ";
    cin >> a;
    myObject.factorial(a);
    return 0;
}