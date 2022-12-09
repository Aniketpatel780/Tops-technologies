#include <iostream>

using namespace std;

class shape
{
    public:
    void area(int radius)
    {
        cout << "Area of circle: " << 3.14 * radius << endl;
    }
    void area(int height, int width)
    {
        cout << "Area of rectangle: " << height * width << endl;
    }
    void area(double height, double base)
    {
        cout << "Area of triangle: " << .5 * base * height << endl;
    }
};

int main(void)
{
    shape circle;
    circle.area(10);
    shape rect;
    rect.area(10, 10);
    shape triangle;
    triangle.area(1.0, 2.0);
    return 0;
}