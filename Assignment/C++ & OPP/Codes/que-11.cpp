#include <iostream>
using namespace std;

class Interest
{
    public:
    float simpleInterest;
    Interest(int principle, int year, float rate)
    {
        simpleInterest = (principle * year * rate) / 100;
    }
};

int main(void)
{
    Interest a(1000, 10, 2);
    cout << a.simpleInterest << endl;
    Interest b(12030, 9, 2.5);
    cout << b.simpleInterest;
    return 0;
}