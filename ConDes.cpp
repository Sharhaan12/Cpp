#include <iostream>
using namespace std;

class Shape
{
    float radius, length, width;

public:

    // Circle Constructor
    Shape(float r)
    {
        radius = r;
        cout << "Circle constructor called" << endl;
    }

    // Rectangle Constructor
    Shape(float l, float w)
    {
        length = l;
        width = w;
        cout << "Rectangle constructor called" << endl;
    }

    void circlePerimeter()
    {
        cout << "Perimeter of circle = "
             << (2 * 3.14 * radius) << endl;
    }

    void rectanglePerimeter()
    {
        cout << "Perimeter of rectangle = "
             << 2 * (length + width) << endl;
    }

    ~Shape()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Shape circle(5);
    circle.circlePerimeter();

    Shape rectangle(10, 6);
    rectangle.rectanglePerimeter();

    return 0;
}